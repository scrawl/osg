// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/StaticMethodInfo>
#include <osgIntrospection/Attributes>

#include <osg/ApplicationUsage>
#include <osg/Camera>
#include <osgAnimation/StatsHandler>
#include <osgAnimation/StatsVisitor>
#include <osgGA/GUIActionAdapter>
#include <osgGA/GUIEventAdapter>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_ENUM_REFLECTOR(osgAnimation::StatsHandler::StatsType)
	I_DeclaringFile("osgAnimation/StatsHandler");
	I_EnumLabel(osgAnimation::StatsHandler::NO_STATS);
	I_EnumLabel(osgAnimation::StatsHandler::FRAME_RATE);
	I_EnumLabel(osgAnimation::StatsHandler::LAST);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgAnimation::StatsHandler)
	I_DeclaringFile("osgAnimation/StatsHandler");
	I_BaseType(osgGA::GUIEventHandler);
	I_Constructor0(____StatsHandler,
	               "",
	               "");
	I_Method1(void, setKeyEventTogglesOnScreenStats, IN, int, key,
	          Properties::NON_VIRTUAL,
	          __void__setKeyEventTogglesOnScreenStats__int,
	          "",
	          "");
	I_Method0(int, getKeyEventTogglesOnScreenStats,
	          Properties::NON_VIRTUAL,
	          __int__getKeyEventTogglesOnScreenStats,
	          "",
	          "");
	I_Method1(void, setKeyEventPrintsOutStats, IN, int, key,
	          Properties::NON_VIRTUAL,
	          __void__setKeyEventPrintsOutStats__int,
	          "",
	          "");
	I_Method0(int, getKeyEventPrintsOutStats,
	          Properties::NON_VIRTUAL,
	          __int__getKeyEventPrintsOutStats,
	          "",
	          "");
	I_Method0(double, getBlockMultiplier,
	          Properties::NON_VIRTUAL,
	          __double__getBlockMultiplier,
	          "",
	          "");
	I_Method0(void, reset,
	          Properties::NON_VIRTUAL,
	          __void__reset,
	          "",
	          "");
	I_Method0(osg::Camera *, getCamera,
	          Properties::NON_VIRTUAL,
	          __osg_Camera_P1__getCamera,
	          "",
	          "");
	I_Method0(const osg::Camera *, getCamera,
	          Properties::NON_VIRTUAL,
	          __C5_osg_Camera_P1__getCamera,
	          "",
	          "");
	I_Method2(bool, handle, IN, const osgGA::GUIEventAdapter &, x, IN, osgGA::GUIActionAdapter &, x,
	          Properties::VIRTUAL,
	          __bool__handle__C5_osgGA_GUIEventAdapter_R1__osgGA_GUIActionAdapter_R1,
	          "Deprecated, Handle events, return true if handled, false otherwise. ",
	          "");
	I_Method1(void, getUsage, IN, osg::ApplicationUsage &, usage,
	          Properties::VIRTUAL,
	          __void__getUsage__osg_ApplicationUsage_R1,
	          "Get the keyboard and mouse usage of this manipulator. ",
	          "");
	I_Method1(void, updateGraph, IN, osgAnimation::StatsActionVisitor *, visitor,
	          Properties::NON_VIRTUAL,
	          __void__updateGraph__osgAnimation_StatsActionVisitor_P1,
	          "",
	          "");
	I_ProtectedMethod1(void, setUpHUDCamera, IN, osgViewer::ViewerBase *, viewer,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __void__setUpHUDCamera__osgViewer_ViewerBase_P1,
	                   "",
	                   "");
	I_ProtectedMethod4(osg::Geometry *, createBackgroundRectangle, IN, const osg::Vec3 &, pos, IN, const float, width, IN, const float, height, IN, osg::Vec4 &, color,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __osg_Geometry_P1__createBackgroundRectangle__C5_osg_Vec3_R1__C5_float__C5_float__osg_Vec4_R1,
	                   "",
	                   "");
	I_ProtectedMethod4(osg::Geometry *, createGeometry, IN, const osg::Vec3 &, pos, IN, float, height, IN, const osg::Vec4 &, colour, IN, unsigned int, numBlocks,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __osg_Geometry_P1__createGeometry__C5_osg_Vec3_R1__float__C5_osg_Vec4_R1__unsigned_int,
	                   "",
	                   "");
	I_ProtectedMethod4(osg::Geometry *, createFrameMarkers, IN, const osg::Vec3 &, pos, IN, float, height, IN, const osg::Vec4 &, colour, IN, unsigned int, numBlocks,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __osg_Geometry_P1__createFrameMarkers__C5_osg_Vec3_R1__float__C5_osg_Vec4_R1__unsigned_int,
	                   "",
	                   "");
	I_ProtectedMethod4(osg::Geometry *, createTick, IN, const osg::Vec3 &, pos, IN, float, height, IN, const osg::Vec4 &, colour, IN, unsigned int, numTicks,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __osg_Geometry_P1__createTick__C5_osg_Vec3_R1__float__C5_osg_Vec4_R1__unsigned_int,
	                   "",
	                   "");
	I_ProtectedMethod7(osg::Node *, createCameraTimeStats, IN, const std::string &, font, IN, osg::Vec3 &, pos, IN, float, startBlocks, IN, bool, acquireGPUStats, IN, float, characterSize, IN, osg::Stats *, viewerStats, IN, osg::Camera *, camera,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __osg_Node_P1__createCameraTimeStats__C5_std_string_R1__osg_Vec3_R1__float__bool__float__osg_Stats_P1__osg_Camera_P1,
	                   "",
	                   "");
	I_ProtectedMethod1(void, setUpScene, IN, osgViewer::Viewer *, viewer,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __void__setUpScene__osgViewer_Viewer_P1,
	                   "",
	                   "");
	I_SimpleProperty(double, BlockMultiplier, 
	                 __double__getBlockMultiplier, 
	                 0);
	I_SimpleProperty(osg::Camera *, Camera, 
	                 __osg_Camera_P1__getCamera, 
	                 0);
	I_SimpleProperty(int, KeyEventPrintsOutStats, 
	                 __int__getKeyEventPrintsOutStats, 
	                 __void__setKeyEventPrintsOutStats__int);
	I_SimpleProperty(int, KeyEventTogglesOnScreenStats, 
	                 __int__getKeyEventTogglesOnScreenStats, 
	                 __void__setKeyEventTogglesOnScreenStats__int);
END_REFLECTOR

