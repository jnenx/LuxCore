/***************************************************************************
 * Copyright 1998-2018 by authors (see AUTHORS.txt)                        *
 *                                                                         *
 *   This file is part of LuxCoreRender.                                   *
 *                                                                         *
 * Licensed under the Apache License, Version 2.0 (the "License");         *
 * you may not use this file except in compliance with the License.        *
 * You may obtain a copy of the License at                                 *
 *                                                                         *
 *     http://www.apache.org/licenses/LICENSE-2.0                          *
 *                                                                         *
 * Unless required by applicable law or agreed to in writing, software     *
 * distributed under the License is distributed on an "AS IS" BASIS,       *
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.*
 * See the License for the specific language governing permissions and     *
 * limitations under the License.                                          *
 ***************************************************************************/

#ifndef _SLG_PGCIKDTREE_H
#define	_SLG_PGCIKDTREE_H

#include "slg/slg.h"
#include "slg/core/indexkdtree.h"

namespace slg {

class VisibilityParticle;

class PGICKdTree : public IndexKdTree<VisibilityParticle> {
public:
	PGICKdTree(const std::vector<VisibilityParticle> &allEntries);
	virtual ~PGICKdTree();

	u_int GetNearestEntry(const luxrays::Point &p, const luxrays::Normal &n,
			const float radius2, const float normalCosAngle) const;
	void GetAllNearEntries(std::vector<u_int> &allNearEntryIndices,
			const luxrays::Point &p, const luxrays::Normal &n,
			const float radius2, const float normalCosAngle) const;
};

}

#endif	/* _SLG_PGCIKDTREE_H */
