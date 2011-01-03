// This file has been generated by Py++.

#include "boost/python.hpp"
#include "python_CEGUI.h"
#include "URect.pypp.hpp"

namespace bp = boost::python;

void register_URect_class(){

    { //::CEGUI::URect
        typedef bp::class_< CEGUI::URect > URect_exposer_t;
        URect_exposer_t URect_exposer = URect_exposer_t( "URect", bp::init< >() );
        bp::scope URect_scope( URect_exposer );
        URect_exposer.def( bp::init< CEGUI::UVector2 const &, CEGUI::UVector2 const & >(( bp::arg("min"), bp::arg("max") )) );
        URect_exposer.def( bp::init< CEGUI::UDim const &, CEGUI::UDim const &, CEGUI::UDim const &, CEGUI::UDim const & >(( bp::arg("left"), bp::arg("top"), bp::arg("right"), bp::arg("bottom") )) );
        URect_exposer.def( bp::init< CEGUI::URect const & >(( bp::arg("v") )) );
        { //::CEGUI::URect::asAbsolute
        
            typedef ::CEGUI::Rect ( ::CEGUI::URect::*asAbsolute_function_type )( ::CEGUI::Size const & ) const;
            
            URect_exposer.def( 
                "asAbsolute"
                , asAbsolute_function_type( &::CEGUI::URect::asAbsolute )
                , ( bp::arg("base") ) );
        
        }
        { //::CEGUI::URect::asRelative
        
            typedef ::CEGUI::Rect ( ::CEGUI::URect::*asRelative_function_type )( ::CEGUI::Size const & ) const;
            
            URect_exposer.def( 
                "asRelative"
                , asRelative_function_type( &::CEGUI::URect::asRelative )
                , ( bp::arg("base") ) );
        
        }
        { //::CEGUI::URect::getHeight
        
            typedef ::CEGUI::UDim ( ::CEGUI::URect::*getHeight_function_type )(  ) const;
            
            URect_exposer.def( 
                "getHeight"
                , getHeight_function_type( &::CEGUI::URect::getHeight ) );
        
        }
        { //::CEGUI::URect::getPosition
        
            typedef ::CEGUI::UVector2 const & ( ::CEGUI::URect::*getPosition_function_type )(  ) const;
            
            URect_exposer.def( 
                "getPosition"
                , getPosition_function_type( &::CEGUI::URect::getPosition )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::CEGUI::URect::getSize
        
            typedef ::CEGUI::UVector2 ( ::CEGUI::URect::*getSize_function_type )(  ) const;
            
            URect_exposer.def( 
                "getSize"
                , getSize_function_type( &::CEGUI::URect::getSize ) );
        
        }
        { //::CEGUI::URect::getWidth
        
            typedef ::CEGUI::UDim ( ::CEGUI::URect::*getWidth_function_type )(  ) const;
            
            URect_exposer.def( 
                "getWidth"
                , getWidth_function_type( &::CEGUI::URect::getWidth ) );
        
        }
        { //::CEGUI::URect::offset
        
            typedef void ( ::CEGUI::URect::*offset_function_type )( ::CEGUI::UVector2 const & ) ;
            
            URect_exposer.def( 
                "offset"
                , offset_function_type( &::CEGUI::URect::offset )
                , ( bp::arg("sz") ) );
        
        }
        URect_exposer.def( bp::self * bp::other< float >() );
        URect_exposer.def( bp::self * bp::other< CEGUI::UDim >() );
        URect_exposer.def( bp::self + bp::self );
        { //::CEGUI::URect::setHeight
        
            typedef void ( ::CEGUI::URect::*setHeight_function_type )( ::CEGUI::UDim const & ) ;
            
            URect_exposer.def( 
                "setHeight"
                , setHeight_function_type( &::CEGUI::URect::setHeight )
                , ( bp::arg("h") ) );
        
        }
        { //::CEGUI::URect::setPosition
        
            typedef void ( ::CEGUI::URect::*setPosition_function_type )( ::CEGUI::UVector2 const & ) ;
            
            URect_exposer.def( 
                "setPosition"
                , setPosition_function_type( &::CEGUI::URect::setPosition )
                , ( bp::arg("pos") ) );
        
        }
        { //::CEGUI::URect::setSize
        
            typedef void ( ::CEGUI::URect::*setSize_function_type )( ::CEGUI::UVector2 const & ) ;
            
            URect_exposer.def( 
                "setSize"
                , setSize_function_type( &::CEGUI::URect::setSize )
                , ( bp::arg("sz") ) );
        
        }
        { //::CEGUI::URect::setWidth
        
            typedef void ( ::CEGUI::URect::*setWidth_function_type )( ::CEGUI::UDim const & ) ;
            
            URect_exposer.def( 
                "setWidth"
                , setWidth_function_type( &::CEGUI::URect::setWidth )
                , ( bp::arg("w") ) );
        
        }
        URect_exposer.def_readwrite( "d_max", &CEGUI::URect::d_max );
        URect_exposer.def_readwrite( "d_min", &CEGUI::URect::d_min );
    }

}
