// Generated by gtkmmproc -- DO NOT MODIFY!


#include <gxwmm/knob.h>
#include <gxwmm/private/knob_p.h>

/*
 * Copyright (C) 2009, 2010 Hermann Meyer, James Warden, Andreas Degert
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */

#include <gxw/GxKnob.h>

void Gxw::Knob::set_jump_to_mouse(bool value)
{
	gx_set_knob_jump_to_mouse(value);
}

bool Gxw::Knob::get_jump_to_mouse()
{
	return gx_get_knob_jump_to_mouse();
}


namespace
{
} // anonymous namespace


namespace Glib
{

Gxw::Knob* wrap(GxKnob* object, bool take_copy)
{
  return dynamic_cast<Gxw::Knob *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gxw
{


/* The *_Class implementation: */

const Glib::Class& Knob_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &Knob_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gx_knob_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void Knob_Class::class_init_function(void* g_class, void* class_data)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* Knob_Class::wrap_new(GObject* o)
{
  return manage(new Knob((GxKnob*)(o)));

}


/* The implementation: */

Knob::Knob(const Glib::ConstructParams& construct_params)
:
  Gxw::Regler(construct_params)
{
  }

Knob::Knob(GxKnob* castitem)
:
  Gxw::Regler((GxRegler*)(castitem))
{
  }

Knob::~Knob()
{
  destroy_();
}

Knob::CppClassType Knob::knob_class_; // initialize static member

GType Knob::get_type()
{
  return knob_class_.init().get_type();
}


GType Knob::get_base_type()
{
  return gx_knob_get_type();
}


Knob::Knob()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gxw::Regler(Glib::ConstructParams(knob_class_.init()))
{
  

}


#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<Glib::ustring> Knob::property_var_id() 
{
  return Glib::PropertyProxy<Glib::ustring>(this, "var-id");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<Glib::ustring> Knob::property_var_id() const
{
  return Glib::PropertyProxy_ReadOnly<Glib::ustring>(this, "var-id");
}
#endif //GLIBMM_PROPERTIES_ENABLED


} // namespace Gxw


