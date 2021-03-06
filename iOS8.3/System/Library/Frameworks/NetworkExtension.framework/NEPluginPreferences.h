/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:02:21 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <NetworkExtension/NetworkExtension-Structs.h>
@class NSString;

@interface NEPluginPreferences : NSObject {

	SCPreferencesRef _prefs;
	NSString* _pluginType;

}

@property (assign) SCPreferencesRef prefs;               //@synthesize prefs=_prefs - In the implementation block
@property (readonly) NSString * pluginType;              //@synthesize pluginType=_pluginType - In the implementation block
+(void)removePreferencesForPluginType:(id)arg1 ;
-(SCPreferencesRef)prefs;
-(NSString *)pluginType;
-(id)initWithPluginType:(id)arg1 ;
-(char)isPluginTypeEnabled;
-(void)setPluginTypeEnabled:(char)arg1 appURLData:(id)arg2 ;
-(id)copyAppURL;
-(char)isFlagSet:(CFStringRef)arg1 ;
-(char)setPreferences:(CFDictionaryRef)arg1 ofType:(long)arg2 configurationIdentifier:(id)arg3 ;
-(CFDictionaryRef)copyPersistentDataOfType:(long)arg1 configurationIdentifier:(id)arg2 ;
-(void)setPrefs:(SCPreferencesRef)arg1 ;
-(void)dealloc;
@end

