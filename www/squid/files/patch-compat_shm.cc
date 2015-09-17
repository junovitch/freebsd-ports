--- compat/shm.cc.orig	2015-05-28 11:06:38 UTC
+++ compat/shm.cc
@@ -29,6 +29,8 @@ shm_portable_segment_name_is_path()
     size_t len = sizeof(jailed);
     ::sysctlbyname("security.jail.jailed", &jailed, &len, NULL, 0);
     return !jailed;
+#elif defined (__DragonFly__)
+    return true;
 #else
     return false;
 #endif
