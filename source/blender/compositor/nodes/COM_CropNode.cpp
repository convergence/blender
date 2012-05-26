/*
 * Copyright 2011, Blender Foundation.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 * Contributor: 
 *		Jeroen Bakker 
 *		Monique Dewanchand
 */

#include "COM_CropNode.h"
#include "COM_CropOperation.h"


CropNode::CropNode(bNode *editorNode) : Node(editorNode)
{
}

void CropNode::convertToOperations(ExecutionSystem *graph, CompositorContext * context)
{
	bNode *node = getbNode();
	NodeTwoXYs *cropSettings = (NodeTwoXYs*)node->storage;
	bool relative = (bool)node->custom2;
	bool cropImage = (bool)node->custom1;
	CropBaseOperation *operation;
	if (cropImage) {
		operation = new CropImageOperation();
	}
	else {
		operation = new CropOperation();	
	}
	operation->setCropSettings(cropSettings);
	operation->setRelative(relative);
	this->getInputSocket(0)->relinkConnections(operation->getInputSocket(0), 0, graph);
	this->getOutputSocket()->relinkConnections(operation->getOutputSocket());
	graph->addOperation(operation);
}