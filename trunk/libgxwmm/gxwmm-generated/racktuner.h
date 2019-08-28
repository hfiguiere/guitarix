// Generated by gmmproc 2.60.0 -- DO NOT MODIFY!
#ifndef _GXWMM_RACKTUNER_H
#define _GXWMM_RACKTUNER_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

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
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#include <gxwmm/tuner.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GxRackTuner = struct _GxRackTuner;
using GxRackTunerClass = struct _GxRackTunerClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gxw
{ class RackTuner_Class; } // namespace Gxw
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gxw {


class RackTuner: public Gxw::Tuner {
	public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef RackTuner CppObjectType;
  typedef RackTuner_Class CppClassType;
  typedef GxRackTuner BaseObjectType;
  typedef GxRackTunerClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  RackTuner(RackTuner&& src) noexcept;
  RackTuner& operator=(RackTuner&& src) noexcept;

  // noncopyable
  RackTuner(const RackTuner&) = delete;
  RackTuner& operator=(const RackTuner&) = delete;

  ~RackTuner() noexcept override;

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend class RackTuner_Class;
  static CppClassType racktuner_class_;

protected:
  explicit RackTuner(const Glib::ConstructParams& construct_params);
  explicit RackTuner(GxRackTuner* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  /// Provides access to the underlying C GObject.
  GxRackTuner*       gobj()       { return reinterpret_cast<GxRackTuner*>(gobject_); }

  /// Provides access to the underlying C GObject.
  const GxRackTuner* gobj() const { return reinterpret_cast<GxRackTuner*>(gobject_); }


public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::
  /// This is a default handler for the signal signal_frequency_poll().
  virtual void on_frequency_poll();
  /// This is a default handler for the signal signal_poll_status_changed().
  virtual void on_poll_status_changed(bool p1);


private:

	public:
	RackTuner();
	
  bool get_poll_status();
	
  void set_freq(double p1);
	
  void set_scale_lim(double p1);
	
  double get_scale_lim();
	
  void set_speed(double p1);
	
  double get_speed();
	
  void set_streaming(bool p1);
	
  bool get_streaming();
	
  void set_display_flat(bool p1);
	
  bool get_display_flat();
	
  void set_timestep(int p1);
	
  int get_timestep();
	
  void set_limit_timestep(int p1);
	
  int get_limit_timestep();
	
  void set_temperament(int p1);
	
  int get_temperament();
	
  void clear_notes();
	
  void push_note(int p1, int p2, int p3);
	
  /**
   * @par Slot Prototype:
   * <tt>void on_my_%frequency_poll()</tt>
   *
   * Flags: Run Last
   *
   */

  Glib::SignalProxy< void > signal_frequency_poll();

	
  /**
   * @par Slot Prototype:
   * <tt>void on_my_%poll_status_changed(bool p1)</tt>
   *
   * Flags: Run Last
   *
   */

  Glib::SignalProxy< void,bool > signal_poll_status_changed();

	/** The frequency for which tuning is displayed.
   *
   * Default value: 0
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< double > property_freq() ;

/** The frequency for which tuning is displayed.
   *
   * Default value: 0
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< double > property_freq() const;

	/** The threshold for display of tune match (0.01 = 1 cent).
   *
   * Default value: 0.03
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< double > property_scale_lim() ;

/** The threshold for display of tune match (0.01 = 1 cent).
   *
   * Default value: 0.03
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< double > property_scale_lim() const;

	/** Speed of streaming mode display (led positions per msec).
   *
   * Default value: 0.15
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< double > property_speed() ;

/** Speed of streaming mode display (led positions per msec).
   *
   * Default value: 0.15
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< double > property_speed() const;

	/** select flat enharmonic equivalents instead of sharp.
   *
   * Default value: <tt>false</tt>
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_display_flat() ;

/** select flat enharmonic equivalents instead of sharp.
   *
   * Default value: <tt>false</tt>
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_display_flat() const;

	/** use streaming display.
   *
   * Default value: <tt>false</tt>
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_streaming() ;

/** use streaming display.
   *
   * Default value: <tt>false</tt>
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_streaming() const;

	/** time interval in msec for refreshing the streaming display.
   *
   * Default value: 50
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< int > property_timestep() ;

/** time interval in msec for refreshing the streaming display.
   *
   * Default value: 50
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< int > property_timestep() const;

	/** time interval in msec for refreshing the streaming match display.
   *
   * Default value: 8
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< int > property_limit_timestep() ;

/** time interval in msec for refreshing the streaming match display.
   *
   * Default value: 8
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< int > property_limit_timestep() const;

	/** Division of the octave into temperament steps.
   *
   * Default value: 50
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< int > property_temperament() ;

/** Division of the octave into temperament steps.
   *
   * Default value: 50
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< int > property_temperament() const;


};

} // namespace Gxw


namespace Glib
{
  /** A Glib::wrap() method for this object.
   *
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gxw::RackTuner
   */
  Gxw::RackTuner* wrap(GxRackTuner* object, bool take_copy = false);
} //namespace Glib


#endif /* _GXWMM_RACKTUNER_H */

