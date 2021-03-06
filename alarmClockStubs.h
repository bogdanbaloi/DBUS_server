/*
 * Generated by gdbus-codegen 2.48.2. DO NOT EDIT.
 *
 * The license of this code is the same as for the source it was derived from.
 */

#ifndef __ALARMCLOCKSTUBS_H__
#define __ALARMCLOCKSTUBS_H__

#include <gio/gio.h>

G_BEGIN_DECLS


/* ------------------------------------------------------------------------ */
/* Declarations for com.time.service.AlarmClock */

#define ALARM_CLOCK_TYPE_ALARM_CLOCK (alarm_clock_alarm_clock_get_type ())
#define ALARM_CLOCK_ALARM_CLOCK(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), ALARM_CLOCK_TYPE_ALARM_CLOCK, alarmClockAlarmClock))
#define ALARM_CLOCK_IS_ALARM_CLOCK(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), ALARM_CLOCK_TYPE_ALARM_CLOCK))
#define ALARM_CLOCK_ALARM_CLOCK_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), ALARM_CLOCK_TYPE_ALARM_CLOCK, alarmClockAlarmClockIface))

struct _alarmClockAlarmClock;
typedef struct _alarmClockAlarmClock alarmClockAlarmClock;
typedef struct _alarmClockAlarmClockIface alarmClockAlarmClockIface;

struct _alarmClockAlarmClockIface
{
  GTypeInterface parent_iface;


  gboolean (*handle_get_alarm_status) (
    alarmClockAlarmClock *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_set_alarm_status) (
    alarmClockAlarmClock *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_hour);

  gboolean (*handle_set_alarm_time) (
    alarmClockAlarmClock *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_hour,
    const gchar *arg_minutes);

  gboolean (*handle_set_time) (
    alarmClockAlarmClock *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_hour,
    const gchar *arg_minutes,
    const gchar *arg_seconds);

  void (*ring_alarm) (
    alarmClockAlarmClock *object,
    const gchar *arg_ring_alarm);

};

GType alarm_clock_alarm_clock_get_type (void) G_GNUC_CONST;

GDBusInterfaceInfo *alarm_clock_alarm_clock_interface_info (void);
guint alarm_clock_alarm_clock_override_properties (GObjectClass *klass, guint property_id_begin);


/* D-Bus method call completion functions: */
void alarm_clock_alarm_clock_complete_set_time (
    alarmClockAlarmClock *object,
    GDBusMethodInvocation *invocation);

void alarm_clock_alarm_clock_complete_set_alarm_time (
    alarmClockAlarmClock *object,
    GDBusMethodInvocation *invocation);

void alarm_clock_alarm_clock_complete_get_alarm_status (
    alarmClockAlarmClock *object,
    GDBusMethodInvocation *invocation,
    const gchar *result);

void alarm_clock_alarm_clock_complete_set_alarm_status (
    alarmClockAlarmClock *object,
    GDBusMethodInvocation *invocation);



/* D-Bus signal emissions functions: */
void alarm_clock_alarm_clock_emit_ring_alarm (
    alarmClockAlarmClock *object,
    const gchar *arg_ring_alarm);



/* D-Bus method calls: */
void alarm_clock_alarm_clock_call_set_time (
    alarmClockAlarmClock *proxy,
    const gchar *arg_hour,
    const gchar *arg_minutes,
    const gchar *arg_seconds,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean alarm_clock_alarm_clock_call_set_time_finish (
    alarmClockAlarmClock *proxy,
    GAsyncResult *res,
    GError **error);

gboolean alarm_clock_alarm_clock_call_set_time_sync (
    alarmClockAlarmClock *proxy,
    const gchar *arg_hour,
    const gchar *arg_minutes,
    const gchar *arg_seconds,
    GCancellable *cancellable,
    GError **error);

void alarm_clock_alarm_clock_call_set_alarm_time (
    alarmClockAlarmClock *proxy,
    const gchar *arg_hour,
    const gchar *arg_minutes,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean alarm_clock_alarm_clock_call_set_alarm_time_finish (
    alarmClockAlarmClock *proxy,
    GAsyncResult *res,
    GError **error);

gboolean alarm_clock_alarm_clock_call_set_alarm_time_sync (
    alarmClockAlarmClock *proxy,
    const gchar *arg_hour,
    const gchar *arg_minutes,
    GCancellable *cancellable,
    GError **error);

void alarm_clock_alarm_clock_call_get_alarm_status (
    alarmClockAlarmClock *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean alarm_clock_alarm_clock_call_get_alarm_status_finish (
    alarmClockAlarmClock *proxy,
    gchar **out_result,
    GAsyncResult *res,
    GError **error);

gboolean alarm_clock_alarm_clock_call_get_alarm_status_sync (
    alarmClockAlarmClock *proxy,
    gchar **out_result,
    GCancellable *cancellable,
    GError **error);

void alarm_clock_alarm_clock_call_set_alarm_status (
    alarmClockAlarmClock *proxy,
    const gchar *arg_hour,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean alarm_clock_alarm_clock_call_set_alarm_status_finish (
    alarmClockAlarmClock *proxy,
    GAsyncResult *res,
    GError **error);

gboolean alarm_clock_alarm_clock_call_set_alarm_status_sync (
    alarmClockAlarmClock *proxy,
    const gchar *arg_hour,
    GCancellable *cancellable,
    GError **error);



/* ---- */

#define ALARM_CLOCK_TYPE_ALARM_CLOCK_PROXY (alarm_clock_alarm_clock_proxy_get_type ())
#define ALARM_CLOCK_ALARM_CLOCK_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), ALARM_CLOCK_TYPE_ALARM_CLOCK_PROXY, alarmClockAlarmClockProxy))
#define ALARM_CLOCK_ALARM_CLOCK_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), ALARM_CLOCK_TYPE_ALARM_CLOCK_PROXY, alarmClockAlarmClockProxyClass))
#define ALARM_CLOCK_ALARM_CLOCK_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), ALARM_CLOCK_TYPE_ALARM_CLOCK_PROXY, alarmClockAlarmClockProxyClass))
#define ALARM_CLOCK_IS_ALARM_CLOCK_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), ALARM_CLOCK_TYPE_ALARM_CLOCK_PROXY))
#define ALARM_CLOCK_IS_ALARM_CLOCK_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), ALARM_CLOCK_TYPE_ALARM_CLOCK_PROXY))

typedef struct _alarmClockAlarmClockProxy alarmClockAlarmClockProxy;
typedef struct _alarmClockAlarmClockProxyClass alarmClockAlarmClockProxyClass;
typedef struct _alarmClockAlarmClockProxyPrivate alarmClockAlarmClockProxyPrivate;

struct _alarmClockAlarmClockProxy
{
  /*< private >*/
  GDBusProxy parent_instance;
  alarmClockAlarmClockProxyPrivate *priv;
};

struct _alarmClockAlarmClockProxyClass
{
  GDBusProxyClass parent_class;
};

GType alarm_clock_alarm_clock_proxy_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (alarmClockAlarmClockProxy, g_object_unref)
#endif

void alarm_clock_alarm_clock_proxy_new (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
alarmClockAlarmClock *alarm_clock_alarm_clock_proxy_new_finish (
    GAsyncResult        *res,
    GError             **error);
alarmClockAlarmClock *alarm_clock_alarm_clock_proxy_new_sync (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);

void alarm_clock_alarm_clock_proxy_new_for_bus (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
alarmClockAlarmClock *alarm_clock_alarm_clock_proxy_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
alarmClockAlarmClock *alarm_clock_alarm_clock_proxy_new_for_bus_sync (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);


/* ---- */

#define ALARM_CLOCK_TYPE_ALARM_CLOCK_SKELETON (alarm_clock_alarm_clock_skeleton_get_type ())
#define ALARM_CLOCK_ALARM_CLOCK_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), ALARM_CLOCK_TYPE_ALARM_CLOCK_SKELETON, alarmClockAlarmClockSkeleton))
#define ALARM_CLOCK_ALARM_CLOCK_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), ALARM_CLOCK_TYPE_ALARM_CLOCK_SKELETON, alarmClockAlarmClockSkeletonClass))
#define ALARM_CLOCK_ALARM_CLOCK_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), ALARM_CLOCK_TYPE_ALARM_CLOCK_SKELETON, alarmClockAlarmClockSkeletonClass))
#define ALARM_CLOCK_IS_ALARM_CLOCK_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), ALARM_CLOCK_TYPE_ALARM_CLOCK_SKELETON))
#define ALARM_CLOCK_IS_ALARM_CLOCK_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), ALARM_CLOCK_TYPE_ALARM_CLOCK_SKELETON))

typedef struct _alarmClockAlarmClockSkeleton alarmClockAlarmClockSkeleton;
typedef struct _alarmClockAlarmClockSkeletonClass alarmClockAlarmClockSkeletonClass;
typedef struct _alarmClockAlarmClockSkeletonPrivate alarmClockAlarmClockSkeletonPrivate;

struct _alarmClockAlarmClockSkeleton
{
  /*< private >*/
  GDBusInterfaceSkeleton parent_instance;
  alarmClockAlarmClockSkeletonPrivate *priv;
};

struct _alarmClockAlarmClockSkeletonClass
{
  GDBusInterfaceSkeletonClass parent_class;
};

GType alarm_clock_alarm_clock_skeleton_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (alarmClockAlarmClockSkeleton, g_object_unref)
#endif

alarmClockAlarmClock *alarm_clock_alarm_clock_skeleton_new (void);


/* ---- */

#define ALARM_CLOCK_TYPE_OBJECT (alarm_clock_object_get_type ())
#define ALARM_CLOCK_OBJECT(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), ALARM_CLOCK_TYPE_OBJECT, alarmClockObject))
#define ALARM_CLOCK_IS_OBJECT(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), ALARM_CLOCK_TYPE_OBJECT))
#define ALARM_CLOCK_OBJECT_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), ALARM_CLOCK_TYPE_OBJECT, alarmClockObject))

struct _alarmClockObject;
typedef struct _alarmClockObject alarmClockObject;
typedef struct _alarmClockObjectIface alarmClockObjectIface;

struct _alarmClockObjectIface
{
  GTypeInterface parent_iface;
};

GType alarm_clock_object_get_type (void) G_GNUC_CONST;

alarmClockAlarmClock *alarm_clock_object_get_alarm_clock (alarmClockObject *object);
alarmClockAlarmClock *alarm_clock_object_peek_alarm_clock (alarmClockObject *object);

#define ALARM_CLOCK_TYPE_OBJECT_PROXY (alarm_clock_object_proxy_get_type ())
#define ALARM_CLOCK_OBJECT_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), ALARM_CLOCK_TYPE_OBJECT_PROXY, alarmClockObjectProxy))
#define ALARM_CLOCK_OBJECT_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), ALARM_CLOCK_TYPE_OBJECT_PROXY, alarmClockObjectProxyClass))
#define ALARM_CLOCK_OBJECT_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), ALARM_CLOCK_TYPE_OBJECT_PROXY, alarmClockObjectProxyClass))
#define ALARM_CLOCK_IS_OBJECT_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), ALARM_CLOCK_TYPE_OBJECT_PROXY))
#define ALARM_CLOCK_IS_OBJECT_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), ALARM_CLOCK_TYPE_OBJECT_PROXY))

typedef struct _alarmClockObjectProxy alarmClockObjectProxy;
typedef struct _alarmClockObjectProxyClass alarmClockObjectProxyClass;
typedef struct _alarmClockObjectProxyPrivate alarmClockObjectProxyPrivate;

struct _alarmClockObjectProxy
{
  /*< private >*/
  GDBusObjectProxy parent_instance;
  alarmClockObjectProxyPrivate *priv;
};

struct _alarmClockObjectProxyClass
{
  GDBusObjectProxyClass parent_class;
};

GType alarm_clock_object_proxy_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (alarmClockObjectProxy, g_object_unref)
#endif

alarmClockObjectProxy *alarm_clock_object_proxy_new (GDBusConnection *connection, const gchar *object_path);

#define ALARM_CLOCK_TYPE_OBJECT_SKELETON (alarm_clock_object_skeleton_get_type ())
#define ALARM_CLOCK_OBJECT_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), ALARM_CLOCK_TYPE_OBJECT_SKELETON, alarmClockObjectSkeleton))
#define ALARM_CLOCK_OBJECT_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), ALARM_CLOCK_TYPE_OBJECT_SKELETON, alarmClockObjectSkeletonClass))
#define ALARM_CLOCK_OBJECT_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), ALARM_CLOCK_TYPE_OBJECT_SKELETON, alarmClockObjectSkeletonClass))
#define ALARM_CLOCK_IS_OBJECT_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), ALARM_CLOCK_TYPE_OBJECT_SKELETON))
#define ALARM_CLOCK_IS_OBJECT_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), ALARM_CLOCK_TYPE_OBJECT_SKELETON))

typedef struct _alarmClockObjectSkeleton alarmClockObjectSkeleton;
typedef struct _alarmClockObjectSkeletonClass alarmClockObjectSkeletonClass;
typedef struct _alarmClockObjectSkeletonPrivate alarmClockObjectSkeletonPrivate;

struct _alarmClockObjectSkeleton
{
  /*< private >*/
  GDBusObjectSkeleton parent_instance;
  alarmClockObjectSkeletonPrivate *priv;
};

struct _alarmClockObjectSkeletonClass
{
  GDBusObjectSkeletonClass parent_class;
};

GType alarm_clock_object_skeleton_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (alarmClockObjectSkeleton, g_object_unref)
#endif

alarmClockObjectSkeleton *alarm_clock_object_skeleton_new (const gchar *object_path);
void alarm_clock_object_skeleton_set_alarm_clock (alarmClockObjectSkeleton *object, alarmClockAlarmClock *interface_);

/* ---- */

#define ALARM_CLOCK_TYPE_OBJECT_MANAGER_CLIENT (alarm_clock_object_manager_client_get_type ())
#define ALARM_CLOCK_OBJECT_MANAGER_CLIENT(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), ALARM_CLOCK_TYPE_OBJECT_MANAGER_CLIENT, alarmClockObjectManagerClient))
#define ALARM_CLOCK_OBJECT_MANAGER_CLIENT_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), ALARM_CLOCK_TYPE_OBJECT_MANAGER_CLIENT, alarmClockObjectManagerClientClass))
#define ALARM_CLOCK_OBJECT_MANAGER_CLIENT_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), ALARM_CLOCK_TYPE_OBJECT_MANAGER_CLIENT, alarmClockObjectManagerClientClass))
#define ALARM_CLOCK_IS_OBJECT_MANAGER_CLIENT(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), ALARM_CLOCK_TYPE_OBJECT_MANAGER_CLIENT))
#define ALARM_CLOCK_IS_OBJECT_MANAGER_CLIENT_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), ALARM_CLOCK_TYPE_OBJECT_MANAGER_CLIENT))

typedef struct _alarmClockObjectManagerClient alarmClockObjectManagerClient;
typedef struct _alarmClockObjectManagerClientClass alarmClockObjectManagerClientClass;
typedef struct _alarmClockObjectManagerClientPrivate alarmClockObjectManagerClientPrivate;

struct _alarmClockObjectManagerClient
{
  /*< private >*/
  GDBusObjectManagerClient parent_instance;
  alarmClockObjectManagerClientPrivate *priv;
};

struct _alarmClockObjectManagerClientClass
{
  GDBusObjectManagerClientClass parent_class;
};

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (alarmClockObjectManagerClient, g_object_unref)
#endif

GType alarm_clock_object_manager_client_get_type (void) G_GNUC_CONST;

GType alarm_clock_object_manager_client_get_proxy_type (GDBusObjectManagerClient *manager, const gchar *object_path, const gchar *interface_name, gpointer user_data);

void alarm_clock_object_manager_client_new (
    GDBusConnection        *connection,
    GDBusObjectManagerClientFlags  flags,
    const gchar            *name,
    const gchar            *object_path,
    GCancellable           *cancellable,
    GAsyncReadyCallback     callback,
    gpointer                user_data);
GDBusObjectManager *alarm_clock_object_manager_client_new_finish (
    GAsyncResult        *res,
    GError             **error);
GDBusObjectManager *alarm_clock_object_manager_client_new_sync (
    GDBusConnection        *connection,
    GDBusObjectManagerClientFlags  flags,
    const gchar            *name,
    const gchar            *object_path,
    GCancellable           *cancellable,
    GError                **error);

void alarm_clock_object_manager_client_new_for_bus (
    GBusType                bus_type,
    GDBusObjectManagerClientFlags  flags,
    const gchar            *name,
    const gchar            *object_path,
    GCancellable           *cancellable,
    GAsyncReadyCallback     callback,
    gpointer                user_data);
GDBusObjectManager *alarm_clock_object_manager_client_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
GDBusObjectManager *alarm_clock_object_manager_client_new_for_bus_sync (
    GBusType                bus_type,
    GDBusObjectManagerClientFlags  flags,
    const gchar            *name,
    const gchar            *object_path,
    GCancellable           *cancellable,
    GError                **error);


G_END_DECLS

#endif /* __ALARMCLOCKSTUBS_H__ */
