/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:26:12 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface UIAccessibilityLoader : NSObject
+(id)loadAccessibilityBundle:(id)arg1 didLoad:(BOOL*)arg2 ;
+(void)loadActualAccessibilityBundle:(id)arg1 didLoad:(BOOL*)arg2 loadSubbundles:(BOOL)arg3 ;
+(void)initialize;
+(void)_accessibilityStartServer;
+(void)_accessibilityReenabled;
+(void)_accessibilityStopServer;
+(BOOL)_accessibilityServerStarted;
+(id)_loadAXBundleForBundle:(id)arg1 didLoad:(BOOL*)arg2 ;
+(id)_accessibilityBundlesForBundle:(id)arg1 ;
+(id)_loadAXBundleForBundle:(id)arg1 didLoad:(BOOL*)arg2 forceLoad:(BOOL)arg3 loadSubbundles:(BOOL)arg4 ;
+(id)loadAccessibilityBundle:(id)arg1 didLoad:(BOOL*)arg2 force:(BOOL)arg3 ;
+(id)_axBundleForBundle:(id)arg1 ;
+(void)_accessibilityInitializeRuntimeOverrides;
+(void)_accessibilityLoadSubbundles:(id)arg1 ;
@end
