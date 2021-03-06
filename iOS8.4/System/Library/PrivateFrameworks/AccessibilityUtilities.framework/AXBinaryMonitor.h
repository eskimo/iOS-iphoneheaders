/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:29 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface AXBinaryMonitor : NSObject {

	NSMutableDictionary* _bundleHandlerMap;
	NSMutableDictionary* _frameworkHandlerMap;
	NSMutableDictionary* _dylibHandlerMap;

}

@property (nonatomic,retain) NSMutableDictionary * bundleHandlerMap;                 //@synthesize bundleHandlerMap=_bundleHandlerMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * frameworkHandlerMap;              //@synthesize frameworkHandlerMap=_frameworkHandlerMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * dylibHandlerMap;                  //@synthesize dylibHandlerMap=_dylibHandlerMap - In the implementation block
+(id)sharedInstance;
+(void)initialize;
-(void)addHandler:(/*^block*/id)arg1 forFramework:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)setBundleHandlerMap:(NSMutableDictionary *)arg1 ;
-(void)setFrameworkHandlerMap:(NSMutableDictionary *)arg1 ;
-(void)setDylibHandlerMap:(NSMutableDictionary *)arg1 ;
-(void)_addHandler:(/*^block*/id)arg1 withName:(id)arg2 toMap:(id*)arg3 ;
-(void)_handleLoadedImagePath:(id)arg1 ;
-(BOOL)_loadImageIsFramework:(id)arg1 ;
-(id)_frameworkNameForImage:(id)arg1 ;
-(NSMutableDictionary *)frameworkHandlerMap;
-(BOOL)_loadImageIsBundle:(id)arg1 ;
-(id)_bundleNameForImage:(id)arg1 ;
-(NSMutableDictionary *)bundleHandlerMap;
-(BOOL)_loadImageIsDylib:(id)arg1 ;
-(id)_dylibNameForImage:(id)arg1 ;
-(NSMutableDictionary *)dylibHandlerMap;
-(void)addHandler:(/*^block*/id)arg1 forBundleID:(id)arg2 ;
-(void)addHandler:(/*^block*/id)arg1 forBundleName:(id)arg2 ;
-(void)addHandler:(/*^block*/id)arg1 forDylib:(id)arg2 ;
@end

