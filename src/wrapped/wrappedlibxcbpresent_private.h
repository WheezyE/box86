#if !(defined(GO) && defined(GOM) && defined(GO2) && defined(DATA))
#error meh!
#endif

//%S X my_xcb_cookie_t

//GO(xcb_present_event_end, 
//GO(xcb_present_event_next, 
DATA(xcb_present_id, 8)
//GO(xcb_present_notify_end, 
GOS(xcb_present_notify_msc, pFEppuuUUU) //%X
//GO(xcb_present_notify_msc_checked, 
//GO(xcb_present_notify_next, 
GOS(xcb_present_pixmap, pFEppuuuuuwwuuuuUUUup) //%X
GOS(xcb_present_pixmap_checked, pFEppuuuuuwwuuuuUUUup) //%X
//GO(xcb_present_pixmap_notifies, 
//GO(xcb_present_pixmap_notifies_iterator, 
//GO(xcb_present_pixmap_notifies_length, 
//GO(xcb_present_pixmap_sizeof, 
//GO(xcb_present_query_capabilities, 
//GO(xcb_present_query_capabilities_reply, 
//GO(xcb_present_query_capabilities_unchecked, 
GOS(xcb_present_query_version, pFEppuu) //%X
GO(xcb_present_query_version_reply, pFpup)
//GO(xcb_present_query_version_unchecked, 
//GO(xcb_present_redirect_notify_notifies, 
//GO(xcb_present_redirect_notify_notifies_iterator, 
//GO(xcb_present_redirect_notify_notifies_length, 
//GO(xcb_present_redirect_notify_sizeof, 
//GO(xcb_present_select_input, 
GOS(xcb_present_select_input_checked, pFEppuuu) //%X
