// Generated by gtkmmproc -- DO NOT MODIFY!


#include <gxwmm/eqslider.h>
#include <gxwmm/private/eqslider_p.h>

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

#include <gxw/GxEQSlider.h>

Gxw::EqSlider::EqSlider(Gtk::Adjustment& adjustment):
	// Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gxw::VSlider(Glib::ConstructParams(eqslider_class_.init(), "adjustment",adjustment.gobj(), static_cast<char*>(0)))
{}

namespace
{
} // anonymous namespace


namespace Glib
{

Gxw::EqSlider* wrap(GxEqSlider* object, bool take_copy)
{
  return dynamic_cast<Gxw::EqSlider *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gxw
{


/* The *_Class implementation: */

const Glib::Class& EqSlider_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &EqSlider_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gx_eq_slider_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void EqSlider_Class::class_init_function(void* g_class, void* class_data)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* EqSlider_Class::wrap_new(GObject* o)
{
  return manage(new EqSlider((GxEqSlider*)(o)));

}


/* The implementation: */

EqSlider::EqSlider(const Glib::ConstructParams& construct_params)
:
  Gxw::VSlider(construct_params)
{
  }

EqSlider::EqSlider(GxEqSlider* castitem)
:
  Gxw::VSlider((GxVSlider*)(castitem))
{
  }

EqSlider::~EqSlider()
{
  destroy_();
}

EqSlider::CppClassType EqSlider::eqslider_class_; // initialize static member

GType EqSlider::get_type()
{
  return eqslider_class_.init().get_type();
}


GType EqSlider::get_base_type()
{
  return gx_eq_slider_get_type();
}


EqSlider::EqSlider()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gxw::VSlider(Glib::ConstructParams(eqslider_class_.init()))
{
  

}


} // namespace Gxw


