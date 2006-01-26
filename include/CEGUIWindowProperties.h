/************************************************************************
	filename: 	CEGUIWindowProperties.h
	created:	5/7/2004
	author:		Paul D Turner
	
	purpose:	Interface to available window base class properties
*************************************************************************/
/*************************************************************************
    Crazy Eddie's GUI System (http://www.cegui.org.uk)
    Copyright (C)2004 - 2005 Paul D Turner (paul@cegui.org.uk)

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public
    License as published by the Free Software Foundation; either
    version 2.1 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public
    License along with this library; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*************************************************************************/
#ifndef _CEGUIWindowProperties_h_
#define _CEGUIWindowProperties_h_

#include "CEGUIProperty.h"


// Start of CEGUI namespace section
namespace CEGUI
{

// Start of WindowProperties namespace section
/*!
\brief
	Namespace containing all classes that make up the properties interface for the Window base class
*/
namespace WindowProperties
{
/*!
\brief
	Property to access window ID field.

	This property offers access to the client specified ID for the window.

	\par Usage:
		- Name: ID
		- Format: "[uint]".

	\par Where:
		- [uint] is any unsigned integer value.
*/
class ID : public Property
{
public:
	ID() : Property(
		"ID",
		"Property to get/set the ID value of the Window.  Value is an unsigned integer number.",
		"0")
	{}

	String	get(const PropertyReceiver* receiver) const;
	void	set(PropertyReceiver* receiver, const String& value);
};


/*!
\brief
	Property to access window alpha setting.

	This property offers access to the alpha-blend setting for the window.

	\par Usage:
		- Name: Alpha
		- Format: "[float]".

	\par Where:
		- [float] is a floating point number between 0.0 and 1.0.
*/
class Alpha : public Property
{
public:
	Alpha() : Property(
		"Alpha",
		"Property to get/set the alpha value of the Window.  Value is floating point number.",
		"1.000000") 
	{}

	String	get(const PropertyReceiver* receiver) const;
	void	set(PropertyReceiver* receiver, const String& value);
};


/*!
\brief
	Property to access window Font setting.

	This property offers access to the current Font setting for the window.

	\par Usage:
		- Name: Font
		- Format: "[text]".

	\par Where:
		- [text] is the name of the Font to assign for this window.  The Font specified must already be loaded.
*/
class Font : public Property
{
public:
	Font() : Property(
		"Font",
		"Property to get/set the font for the Window.  Value is the name of the font to use (must be loaded already).",
		"")
	{}

	String	get(const PropertyReceiver* receiver) const;
	void	set(PropertyReceiver* receiver, const String& value);
	bool	isDefault(const PropertyReceiver* receiver) const;
};


/*!
\brief
	Property to access window text setting.

	This property offers access to the current text for the window.

	\par Usage:
		- Name: Text
		- Format: "[text]".

	\par Where:
		- [text] is the name of the Font to assign for this window.  The Font specified must already be loaded.
*/
class Text : public Property
{
public:
	Text() : Property(
		"Text", 
		"Property to get/set the text / caption for the Window.  Value is the text string to use.",
		"")
	{}

	String	get(const PropertyReceiver* receiver) const;
	void	set(PropertyReceiver* receiver, const String& value);
};


/*!
\brief
	Property to access window mouse cursor setting.

	This property offers access to the current mouse cursor image for the window.

	\par Usage:
		- Name: MouseCursorImage
		- Format: "set:[text] image:[text]".

	\par Where:
		- set:[text] is the name of the Imageset containing the image.  The Imageset name should not contain spaces.  The Imageset specified must already be loaded.
		- image:[text] is the name of the Image on the specified Imageset.  The Image name should not contain spaces.
*/
class MouseCursorImage : public Property
{
public:
	MouseCursorImage() : Property(
		"MouseCursorImage",
		"Property to get/set the mouse cursor image for the Window.  Value should be \"set:<imageset name> image:<image name>\".",
		"")
	{}

	String	get(const PropertyReceiver* receiver) const;
	void	set(PropertyReceiver* receiver, const String& value);
	bool	isDefault(const PropertyReceiver* receiver) const;
};


/*!
\brief
	Property to access window "clipped by parent" setting.

	This property offers access to the clipped by parent setting for the window.

	\par Usage:
		- Name: ClippedByParent
		- Format: "[text]".

	\par Where [Text] is:
		- "True" to indicate the Window is clipped by it's parent.
		- "False" to indicate the Window is not clipped by it's parent.
*/
class ClippedByParent : public Property
{
public:
	ClippedByParent() : Property(
		"ClippedByParent",
		"Property to get/set the 'clipped by parent' setting for the Window.  Value is either \"True\" or \"False\".",
		"True")
	{}

	String	get(const PropertyReceiver* receiver) const;
	void	set(PropertyReceiver* receiver, const String& value);
};


/*!
\brief
	Property to access window "Inherits Alpha" setting.

	This property offers access to the inherits alpha setting for the window.

	\par Usage:
		- Name: InheritsAlpha
		- Format: "[text]".

	\par Where [Text] is:
		- "True" to indicate the Window inherits alpha blend values from it's ancestors.
		- "False" to indicate the Window does not inherit alpha blend values from it's ancestors.
*/
class InheritsAlpha : public Property
{
public:
	InheritsAlpha() : Property(
		"InheritsAlpha",
		"Property to get/set the 'inherits alpha' setting for the Window.  Value is either \"True\" or \"False\".",
		"True")
	{}

	String	get(const PropertyReceiver* receiver) const;
	void	set(PropertyReceiver* receiver, const String& value);
};


/*!
\brief
	Property to access window "Always-On-Top" setting.

	This property offers access to the always on top / topmost setting for the window.

	\par Usage:
		- Name: AlwaysOnTop
		- Format: "[text]".

	\par Where [Text] is:
		- "True" to indicate the Window is always on top, and appears above all other non-always on top Windows.
		- "False" to indicate the Window is not always on top, and will appear below all other always on top Windows.
*/
class AlwaysOnTop : public Property
{
public:
	AlwaysOnTop() : Property(
		"AlwaysOnTop",
		"Property to get/set the 'always on top' setting for the Window.  Value is either \"True\" or \"False\".",
		"False")
	{}

	String	get(const PropertyReceiver* receiver) const;
	void	set(PropertyReceiver* receiver, const String& value);
};


/*!
\brief
	Property to access window Disabled setting.

	This property offers access to the enabled / disabled setting for the window.

	\par Usage:
		- Name: Disabled
		- Format: "[text]".

	\par Where [Text] is:
		- "True" to indicate the Window is disabled, and will normally receive no inputs from the user.
		- "False" to indicate the Window is not disabled and will receive inputs from the user as normal.
*/
class Disabled : public Property
{
public:
	Disabled() : Property(
		"Disabled",
		"Property to get/set the 'disabled state' setting for the Window.  Value is either \"True\" or \"False\".",
		"False")
	{}

	String	get(const PropertyReceiver* receiver) const;
	void	set(PropertyReceiver* receiver, const String& value);
	bool	isDefault(const PropertyReceiver* receiver) const;
};


/*!
\brief
	Property to access window Visible setting.

	This property offers access to the visible setting for the window.

	\par Usage:
		- Name: Visible
		- Format: "[text]".

	\par Where [Text] is:
		- "True" to indicate the Window is visible.
		- "False" to indicate the Window is not visible.
*/
class Visible : public Property
{
public:
	Visible() : Property(
		"Visible",
		"Property to get/set the 'visible state' setting for the Window.  Value is either \"True\" or \"False\".",
		"True")
	{}

	String	get(const PropertyReceiver* receiver) const;
	void	set(PropertyReceiver* receiver, const String& value);
	bool	isDefault(const PropertyReceiver* receiver) const;
};


/*!
\brief
	Property to access window Restore Old Capture setting.

	This property offers access to the restore old capture setting for the window.  This setting is of generally limited use, it
	is primary purpose is for certain operations required for compound widgets.

	\par Usage:
		- Name: RestoreOldCapture
		- Format: "[text]".

	\par Where [Text] is:
		- "True" to indicate the Window should restore any previous capture Window when it loses input capture.
		- "False" to indicate the Window should not restore the old capture Window.  This is the default behaviour.
*/
class RestoreOldCapture : public Property
{
public:
	RestoreOldCapture() : Property(
		"RestoreOldCapture",
		"Property to get/set the 'restore old capture' setting for the Window.  Value is either \"True\" or \"False\".",
		"False")
	{}

	String	get(const PropertyReceiver* receiver) const;
	void	set(PropertyReceiver* receiver, const String& value);
};


/*!
\brief
	Property to access window Destroyed by Parent setting.

	This property offers access to the destryed by parent setting for the window.

	\par Usage:
		- Name: DestroyedByParent
		- Format: "[text]".

	\par Where [Text] is:
		- "True" to indicate the Window should be automatically destroyed when it's parent Window is destroyed.
		- "False" to indicate the Window should not be destroyed when it's parent Window is destroyed.
*/
class DestroyedByParent : public Property
{
public:
	DestroyedByParent() : Property(
		"DestroyedByParent",
		"Property to get/set the 'destroyed by parent' setting for the Window.  Value is either \"True\" or \"False\".",
		"True")
	{}

	String	get(const PropertyReceiver* receiver) const;
	void	set(PropertyReceiver* receiver, const String& value);
};


/*!
\brief
	Property to access window Z-Order changing enabled setting.

	This property offers access to the setting that controls whether z-order changes are enabled for the window.

	\par Usage:
		- Name: ZOrderChangeEnabled
		- Format: "[text]".

	\par Where [Text] is:
		- "True" to indicate the Window should respect requests to change z-order.
		- "False" to indicate the Window should not change it's z-order.
*/
class ZOrderChangeEnabled : public Property
{
public:
	ZOrderChangeEnabled() : Property(
		"ZOrderChangeEnabled",
		"Property to get/set the 'z-order changing enabled' setting for the Window.  Value is either \"True\" or \"False\".",
		"True")
	{}

	String	get(const PropertyReceiver* receiver) const;
	void	set(PropertyReceiver* receiver, const String& value);
};


/*!
\brief
    Property to control whether the window will receive double/triple-click events.

    This property offers access to the setting that controls whether a window will receive double-click and
    triple-click events, or whether the window will receive multiple single mouse button down events instead.

    \par Usage:
        - Name: WantsMultiClickEvents
        - Format: "[text]".

    \par Where [Text] is:
        - "True" to indicate the Window wants double-click and triple-click events.
        - "False" to indicate the Window wants multiple single mouse button down events.
*/
class WantsMultiClickEvents : public Property
{
public:
    WantsMultiClickEvents() : Property(
        "WantsMultiClickEvents",
        "Property to get/set whether the window will receive double-click and triple-click events.  Value is either \"True\" or \"False\".",
        "True")
    {}

    String	get(const PropertyReceiver* receiver) const;
    void	set(PropertyReceiver* receiver, const String& value);
};


/*!
\brief
    Property to control whether the window will receive autorepeat mouse button down events.

    This property offers access to the setting that controls whether a window will receive autorepeat
    mouse button down events.

    \par Usage:
        - Name: MouseButtonDownAutoRepeat
        - Format: "[text]".

    \par Where [Text] is:
        - "True" to indicate the Window will receive autorepeat mouse button down events.
        - "False" to indicate the Window will not receive autorepeat mouse button down events.
*/
class MouseButtonDownAutoRepeat : public Property
{
public:
    MouseButtonDownAutoRepeat() : Property(
        "MouseButtonDownAutoRepeat",
        "Property to get/set whether the window will receive autorepeat mouse button down events.  Value is either \"True\" or \"False\".",
        "False")
    {}

    String  get(const PropertyReceiver* receiver) const;
    void    set(PropertyReceiver* receiver, const String& value);
};


/*!
\brief
    Property to access window autorepeat delay value.

    This property offers access to the value that controls the initial delay for autorepeat mouse button down events.

    \par Usage:
        - Name: AutoRepeatDelay
        - Format: "[float]".

    \par Where:
        - [float]   specifies the delay in seconds.
*/
class AutoRepeatDelay : public Property
{
public:
    AutoRepeatDelay() : Property(
        "AutoRepeatDelay",
        "Property to get/set the autorepeat delay.  Value is a floating point number indicating the delay required in seconds.",
        "0.300000")
    {}

    String  get(const PropertyReceiver* receiver) const;
    void    set(PropertyReceiver* receiver, const String& value);
};


/*!
\brief
    Property to access window autorepeat rate value.

    This property offers access to the value that controls the generation rate for autorepeat mouse button down events.

    \par Usage:
        - Name: AutoRepeatRate
        - Format: "[float]".

    \par Where:
        - [float]   specifies the rate at which autorepeat events will be generated in seconds.
*/
class AutoRepeatRate : public Property
{
public:
    AutoRepeatRate() : Property(
        "AutoRepeatRate",
        "Property to get/set the autorepeat rate.  Value is a floating point number indicating the rate required in seconds.",
        "0.060000")
    {}

    String  get(const PropertyReceiver* receiver) const;
    void    set(PropertyReceiver* receiver, const String& value);
};

/*!
\brief
	Property to access whether inputs are passed to child windows when
    input is captured to this window.

	\par Usage:
		- Name: DistributeCapturedInputs
		- Format: "[text]".

	\par Where [Text] is:
		- "True" to indicate 'captured' inputs should be passed to attached child windows.
		- "False" to indicate 'captured' inputs should be passed to this window only.
*/
class DistributeCapturedInputs : public Property
{
public:
	DistributeCapturedInputs() : Property(
		"DistributeCapturedInputs",
		"Property to get/set whether captured inputs are passed to child windows.  Value is either \"True\" or \"False\".",
		"False")
	{}

	String	get(const PropertyReceiver* receiver) const;
	void	set(PropertyReceiver* receiver, const String& value);
};

/*!
\brief
    Property to access the custom tooltip for this Window.

    \par Usage:
        - Name: CustomTooltipType
        - Format: "[text]".

    \par Where:
        - [Text] is the typename of the custom tooltip for the Window.
 */
class CustomTooltipType : public Property
{
public:
    CustomTooltipType() : Property(
    "CustomTooltipType",
    "Property to get/set the custom tooltip for the window.  Value is the type name of the custom tooltip.",
    "")
    {}

    String  get(const PropertyReceiver* receiver) const;
    void    set(PropertyReceiver* receiver, const String& value);
};

/*!
\brief
    Property to access the tooltip text for this Window.

    \par Usage:
        - Name: Tooltip
        - Format: "[text]".

    \par Where:
        - [Text] is the tooltip text for this window.
 */
class Tooltip : public Property
{
public:
    Tooltip() : Property(
    "Tooltip",
    "Property to get/set the tooltip text for the window.  Value is the tooltip text for the window.",
    "")
    {}

    String  get(const PropertyReceiver* receiver) const;
    void    set(PropertyReceiver* receiver, const String& value);
};

/*!
\brief
    Property to access whether the window inherits its tooltip text from its parent whn it has no tooltip text of its own.

    \par Usage:
        - Name: InheritsTooltipText
        - Format: "[text]".

    \par Where [Text] is:
        - "True" to indicate the Window inherits its tooltip text from its parent.
        - "False" to indicate the Window does not inherit its tooltip text.
*/
class InheritsTooltipText : public Property
{
public:
    InheritsTooltipText() : Property(
        "InheritsTooltipText",
        "Property to get/set whether the window inherits its parents tooltip text when it has none of its own.  Value is either \"True\" or \"False\".",
        "False")
    {}

    String  get(const PropertyReceiver* receiver) const;
    void    set(PropertyReceiver* receiver, const String& value);
};


/*!
\brief
	Property to access whether the window rises to the top of the z order when clicked.

	\par Usage:
		- Name: RiseOnClick
		- Format: "[text]".

	\par Where [Text] is:
		- "True" to indicate the Window will rise to the surface when clicked.
		- "False" to indicate the Window will not change z position when clicked.
*/
class RiseOnClick : public Property
{
public:
    RiseOnClick() : Property(
		"RiseOnClick",
		"Property to get/set whether the window will come tot he top of the z order hwn clicked.  Value is either \"True\" or \"False\".",
		"True")
	{}

	String	get(const PropertyReceiver* receiver) const;
	void	set(PropertyReceiver* receiver, const String& value);
};


/*!
\brief
    Property to access the vertical alignment setting for the window.

    \par Usage:
        - Name: VerticalAlignment
        - Format: "[text]".

    \par Where [Text] is:
        - "Top" to indicate the windows position is an offset of its top edge from its parents top edge.
        - "Centre" to indicate the windows position is an offset of its centre point from its parents centre point.
        - "Bottom" to indicate the windows position is an offset of its bottom edge from its parents bottom edge.
*/
class VerticalAlignment : public Property
{
    public:
        VerticalAlignment() : Property(
        "VerticalAlignment",
        "Property to get/set the windows vertical alignment.  Value is one of \"Top\", \"Centre\" or \"Bottom\".",
        "Top")
        {}

        String	get(const PropertyReceiver* receiver) const;
        void	set(PropertyReceiver* receiver, const String& value);
};


/*!
\brief
    Property to access the horizontal alignment setting for the window.

    \par Usage:
        - Name: HorizontalAlignment
        - Format: "[text]".

    \par Where [Text] is:
        - "Left" to indicate the windows position is an offset of its left edge from its parents left edge.
        - "Centre" to indicate the windows position is an offset of its centre point from its parents centre point.
        - "Right" to indicate the windows position is an offset of its right edge from its parents right edge.
*/
class HorizontalAlignment : public Property
{
    public:
        HorizontalAlignment() : Property(
        "HorizontalAlignment",
        "Property to get/set the windows horizontal alignment.  Value is one of \"Left\", \"Centre\" or \"Right\".",
        "Left")
        {}

        String	get(const PropertyReceiver* receiver) const;
        void	set(PropertyReceiver* receiver, const String& value);
};


/*!
\brief
	Property to access the unified area rectangle of the window.

	\par Usage:
		- Name: UnifiedAreaRect
		- Format: "{{[ls],[lo]},{[ts],[to]},{[rs],[ro]},{[bs],[bo]}}"

	\par Where:
		- [ls] is a floating point value describing the relative scale value for the left edge.
		- [lo] is a floating point value describing the absolute offset value for the left edge.
		- [ts] is a floating point value describing the relative scale value for the top edge.
		- [to] is a floating point value describing the absolute offset value for the top edge.
		- [rs] is a floating point value describing the relative scale value for the right edge.
		- [ro] is a floating point value describing the absolute offset value for the right edge.
		- [bs] is a floating point value describing the relative scale value for the bottom edge.
		- [bo] is a floating point value describing the absolute offset value for the bottom edge.
*/
class UnifiedAreaRect : public Property
{
	public:
		UnifiedAreaRect() : Property(
		"UnifiedAreaRect",
		"Property to get/set the windows unified area rectangle.  Value is a \"URect\".",
		"{{0.000000,0.000000},{0.000000,0.000000},{0.000000,0.000000},{0.000000,0.000000}}")
		{}

		String	get(const PropertyReceiver* receiver) const;
		void	set(PropertyReceiver* receiver, const String& value);
};


/*!
\brief
	Property to access the unified position of the window.

	\par Usage:
		- Name: UnifiedPosition
		- Format: "{{[xs],[xo]},{[ys],[yo]}}"

	\par Where:
		- [xs] is a floating point value describing the relative scale value for the position x-coordinate.
		- [xo] is a floating point value describing the absolute offset value for the position x-coordinate.
		- [ys] is a floating point value describing the relative scale value for the position y-coordinate.
		- [yo] is a floating point value describing the absolute offset value for the position y-coordinate.
*/
class UnifiedPosition : public Property
{
	public:
		UnifiedPosition() : Property(
		"UnifiedPosition",
		"Property to get/set the windows unified position.  Value is a \"UVector2\".",
		"{{0.000000,0.000000},{0.000000,0.000000}}", false)
		{}

		String	get(const PropertyReceiver* receiver) const;
		void	set(PropertyReceiver* receiver, const String& value);
};


/*!
\brief
	Property to access the unified position x-coordinate of the window.

	\par Usage:
		- Name: UnifiedXPosition
		- Format: "{[s],[o]}"

	\par Where:
		- [s] is a floating point value describing the relative scale value for the position x-coordinate.
		- [o] is a floating point value describing the absolute offset value for the position x-coordinate.
*/
class UnifiedXPosition : public Property
{
	public:
		UnifiedXPosition() : Property(
		"UnifiedXPosition",
		"Property to get/set the windows unified position x-coordinate.  Value is a \"UDim\".",
		"{0.000000,0.000000}", false)
		{}

		String	get(const PropertyReceiver* receiver) const;
		void	set(PropertyReceiver* receiver, const String& value);
};


/*!
\brief
	Property to access the unified position y-coordinate of the window.

	\par Usage:
		- Name: UnifiedYPosition
		- Format: "{[s],[o]}"

	\par Where:
		- [s] is a floating point value describing the relative scale value for the position y-coordinate.
		- [o] is a floating point value describing the absolute offset value for the position y-coordinate.
*/
class UnifiedYPosition : public Property
{
	public:
		UnifiedYPosition() : Property(
		"UnifiedYPosition",
		"Property to get/set the windows unified position y-coordinate.  Value is a \"UDim\".",
		"{0.000000,0.000000}", false)
		{}

		String	get(const PropertyReceiver* receiver) const;
		void	set(PropertyReceiver* receiver, const String& value);
};


/*!
\brief
	Property to access the unified position of the window.

	\par Usage:
		- Name: UnifiedSize
		- Format: "{{[ws],[wo]},{[hs],[ho]}}"

	\par Where:
		- [ws] is a floating point value describing the relative scale value for the width.
		- [wo] is a floating point value describing the absolute offset value for the width.
		- [hs] is a floating point value describing the relative scale value for the height.
		- [ho] is a floating point value describing the absolute offset value for the height.
*/
class UnifiedSize : public Property
{
	public:
		UnifiedSize() : Property(
		"UnifiedSize",
		"Property to get/set the windows unified size.  Value is a \"UVector2\".",
		"{{0.000000,0.000000},{0.000000,0.000000}}", false)
		{}

		String	get(const PropertyReceiver* receiver) const;
		void	set(PropertyReceiver* receiver, const String& value);
};


/*!
\brief
	Property to access the unified width of the window.

	\par Usage:
		- Name: UnifiedWidth
		- Format: "{[s],[o]}"

	\par Where:
		- [s] is a floating point value describing the relative scale value for the width.
		- [o] is a floating point value describing the absolute offset value for the width.
*/
class UnifiedWidth : public Property
{
	public:
		UnifiedWidth() : Property(
		"UnifiedWidth",
		"Property to get/set the windows unified width.  Value is a \"UDim\".",
		"{0.000000,0.000000}", false)
		{}

		String	get(const PropertyReceiver* receiver) const;
		void	set(PropertyReceiver* receiver, const String& value);
};


/*!
\brief
	Property to access the unified height of the window.

	\par Usage:
		- Name: UnifiedHeight
		- Format: "{[s],[o]}"

	\par Where:
		- [s] is a floating point value describing the relative scale value for the height.
		- [o] is a floating point value describing the absolute offset value for the height.
*/
class UnifiedHeight : public Property
{
	public:
		UnifiedHeight() : Property(
		"UnifiedHeight",
		"Property to get/set the windows unified height.  Value is a \"UDim\".",
		"{0.000000,0.000000}", false)
		{}

		String	get(const PropertyReceiver* receiver) const;
		void	set(PropertyReceiver* receiver, const String& value);
};


/*!
\brief
	Property to access the unified minimum size of the window.

	\par Usage:
		- Name: UnifiedMinSize
		- Format: "{{[ws],[wo]},{[hs],[ho]}}"

	\par Where:
		- [ws] is a floating point value describing the relative scale value for the minimum width.
		- [wo] is a floating point value describing the absolute offset value for the minimum width.
		- [hs] is a floating point value describing the relative scale value for the minimum height.
		- [ho] is a floating point value describing the absolute offset value for the minimum height.
*/
class UnifiedMinSize : public Property
{
	public:
		UnifiedMinSize() : Property(
		"UnifiedMinSize",
		"Property to get/set the windows unified minimum size.  Value is a \"UVector2\".",
		"{{0.000000,0.000000},{0.000000,0.000000}}")
		{}

		String	get(const PropertyReceiver* receiver) const;
		void	set(PropertyReceiver* receiver, const String& value);
};


/*!
\brief
	Property to access the unified maximum size of the window.

	\par Usage:
		- Name: UnifiedMaxSize
		- Format: "{{[ws],[wo]},{[hs],[ho]}}"

	\par Where:
		- [ws] is a floating point value describing the relative scale value for the maximum width.
		- [wo] is a floating point value describing the absolute offset value for the maximum width.
		- [hs] is a floating point value describing the relative scale value for the maximum height.
		- [ho] is a floating point value describing the absolute offset value for the maximum height.
*/
class UnifiedMaxSize : public Property
{
	public:
		UnifiedMaxSize() : Property(
		"UnifiedMaxSize",
		"Property to get/set the windows unified maximum size.  Value is a \"UVector2\".",
		"{{0.000000,0.000000},{0.000000,0.000000}}")
		{}

		String	get(const PropertyReceiver* receiver) const;
		void	set(PropertyReceiver* receiver, const String& value);
};


/*!
\brief
    Property to access whether the window ignores mouse events and pass them through to any windows behind it.

    \par Usage:
        - Name: MousePassThroughEnabled
        - Format: "[text]".

    \par Where [Text] is:
        - "True" to indicate the Window will not respond to mouse events but pass them directly to any children behind it.
        - "False" to indicate the Window will respond to normally to all mouse events (Default).
*/
class MousePassThroughEnabled : public Property
{
    public:
        MousePassThroughEnabled() : Property(
        "MousePassThroughEnabled",
        "Property to get/set whether the window ignores mouse events and pass them through to any windows behind it. Value is either \"True\" or \"False\".",
        "False")
        {}

        String  get(const PropertyReceiver* receiver) const;
        void    set(PropertyReceiver* receiver, const String& value);
};


} // End of  WindowProperties namespace section


} // End of  CEGUI namespace section

#endif	// end of guard _CEGUIWindowProperties_h_
