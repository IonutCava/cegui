// This file has been generated by Py++.

#include "boost/python.hpp"
#include "python_CEGUI.h"
#include "RenderEffectFactory.pypp.hpp"

namespace bp = boost::python;

struct RenderEffectFactory_wrapper : CEGUI::RenderEffectFactory, bp::wrapper< CEGUI::RenderEffectFactory > {

    RenderEffectFactory_wrapper()
    : CEGUI::RenderEffectFactory()
      , bp::wrapper< CEGUI::RenderEffectFactory >(){
        // null constructor
        
    }

    virtual ::CEGUI::RenderEffect & create(  ){
        throw std::logic_error("warning W1049: This method could not be overriden in Python - method returns reference to local variable!");
    }

    virtual void destroy( ::CEGUI::RenderEffect & effect ){
        bp::override func_destroy = this->get_override( "destroy" );
        func_destroy( boost::ref(effect) );
    }

};

void register_RenderEffectFactory_class(){

    { //::CEGUI::RenderEffectFactory
        typedef bp::class_< RenderEffectFactory_wrapper, boost::noncopyable > RenderEffectFactory_exposer_t;
        RenderEffectFactory_exposer_t RenderEffectFactory_exposer = RenderEffectFactory_exposer_t( "RenderEffectFactory" );
        bp::scope RenderEffectFactory_scope( RenderEffectFactory_exposer );
        { //::CEGUI::RenderEffectFactory::create
        
            typedef ::CEGUI::RenderEffect & ( ::CEGUI::RenderEffectFactory::*create_function_type )(  ) ;
            
            RenderEffectFactory_exposer.def( 
                "create"
                , bp::pure_virtual( create_function_type(&::CEGUI::RenderEffectFactory::create) )
                , bp::return_value_policy< bp::reference_existing_object >()
                , "! Create an instance of the RenderEffect that this factory creates.\n" );
        
        }
        { //::CEGUI::RenderEffectFactory::destroy
        
            typedef void ( ::CEGUI::RenderEffectFactory::*destroy_function_type )( ::CEGUI::RenderEffect & ) ;
            
            RenderEffectFactory_exposer.def( 
                "destroy"
                , bp::pure_virtual( destroy_function_type(&::CEGUI::RenderEffectFactory::destroy) )
                , ( bp::arg("effect") )
                , "! Destroy an instance of the RenderEffect that this factory creates.\n" );
        
        }
    }

}
