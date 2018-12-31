------------------------------------------------------------------------------
--
-- Copyright (C) 2018 Corona Labs Inc.
-- Contact: support@coronalabs.com
--
-- This file is part of the Corona game engine.
--
-- Commercial License Usage
-- Licensees holding valid commercial Corona licenses may use this file in
-- accordance with the commercial license agreement between you and 
-- Corona Labs Inc. For licensing terms and conditions please contact
-- support@coronalabs.com or visit https://coronalabs.com/com-license
--
-- GNU General Public License Usage
-- Alternatively, this file may be used under the terms of the GNU General
-- Public license version 3. The license is as published by the Free Software
-- Foundation and appearing in the file LICENSE.GPL3 included in the packaging
-- of this file. Please review the following information to ensure the GNU 
-- General Public License requirements will
-- be met: https://www.gnu.org/licenses/gpl-3.0.html
--
-- For overview and more information on licensing please refer to README.md
--
------------------------------------------------------------------------------

simulator =
{
	device = "tvos-tv",
	screenWidth = 1080,
	screenHeight = 1920,
	-- iosPointWidth = 768,
	-- iosPointHeight = 1024,
	displayManufacturer = "Apple",
	displayName = "Apple TV",
	windowTitleBarName = "Apple TV",
	defaultFontSize = 17 * 2,
	supportsScreenRotation = false,
	isUprightOrientationPortrait = false,

	safeScreenInsetTop = 90,
	safeScreenInsetLeft = 60,
	safeScreenInsetBottom = 90,
	safeScreenInsetRight = 60,
	safeLandscapeScreenInsetTop = 60,
	safeLandscapeScreenInsetLeft = 90,
	safeLandscapeScreenInsetBottom = 60,
	safeLandscapeScreenInsetRight = 90,	
}
