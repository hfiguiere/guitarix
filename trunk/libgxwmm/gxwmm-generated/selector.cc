// Generated by gtkmmproc -- DO NOT MODIFY!


#include <gxwmm/selector.h>
#include <gxwmm/private/selector_p.h>

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

#include <gxw/GxSelector.h>

namespace
{
} // anonymous namespace


namespace Glib
{

Gxw::Selector* wrap(GxSelector* object, bool take_copy)
{
  return dynamic_cast<Gxw::Selector *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gxw
{


/* The *_Class implementation: */

const Glib::Class& Selector_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &Selector_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gx_selector_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void Selector_Class::class_init_function(void* g_class, void* class_data)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* Selector_Class::wrap_new(GObject* o)
{
  return manage(new Selector((GxSelector*)(o)));

}


/* The implementation: */

Selector::Selector(const Glib::ConstructParams& construct_params)
:
  Gxw::Regler(construct_params)
{
  }

Selector::Selector(GxSelector* castitem)
:
  Gxw::Regler((GxRegler*)(castitem))
{
  }

Selector::~Selector()
{
  destroy_();
}

Selector::CppClassType Selector::selector_class_; // initialize static member

GType Selector::get_type()
{
  return selector_class_.init().get_type();
}


GType Selector::get_base_type()
{
  return gx_selector_get_type();
}


Selector::Selector()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gxw::Regler(Glib::ConstructParams(selector_class_.init()))
{
  

}

void Selector::set_model(Glib::RefPtr<Gtk::TreeModel> p1)
{
gx_selector_set_model(gobj(), (GtkTreeModel*)Glib::unwrap(p1)); 
}

Glib::RefPtr<Gtk::TreeModel> Selector::get_model()
{
  return Glib::wrap(gx_selector_get_model(gobj()));
}


#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<Gtk::TreeModel> Selector::property_model() 
{
  return Glib::PropertyProxy<Gtk::TreeModel>(this, "model");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<Gtk::TreeModel> Selector::property_model() const
{
  return Glib::PropertyProxy_ReadOnly<Gtk::TreeModel>(this, "model");
}
#endif //GLIBMM_PROPERTIES_ENABLED


} // namespace Gxw


