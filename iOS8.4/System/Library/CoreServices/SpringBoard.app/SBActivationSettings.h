/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:31 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/BSSettingDescriptionProvider.h>
#import <SpringBoard/SBActivationSettings.h>

@protocol SBActivationSettings <NSObject>
@required
-(void)setFlag:(long long)arg1 forActivationSetting:(unsigned)arg2;
-(void)applyActivationSettings:(id)arg1;
-(void)setObject:(id)arg1 forActivationSetting:(unsigned)arg2;
-(BOOL)boolForActivationSetting:(unsigned)arg1;
-(id)objectForActivationSetting:(unsigned)arg1;
-(long long)flagForActivationSetting:(unsigned)arg1;

@end

#import <SpringBoard/NSCopying.h>

@class BSMutableSettings, NSString;

@interface SBActivationSettings : NSObject <BSSettingDescriptionProvider, SBActivationSettings, NSCopying> {

	BSMutableSettings* _settings;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setFlag:(long long)arg1 forActivationSetting:(unsigned)arg2 ;
-(void)applyActivationSettings:(id)arg1 ;
-(void)setObject:(id)arg1 forActivationSetting:(unsigned)arg2 ;
-(BOOL)boolForActivationSetting:(unsigned)arg1 ;
-(id)objectForActivationSetting:(unsigned)arg1 ;
-(long long)flagForActivationSetting:(unsigned)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(id)basicDescriptionWithPrefix:(id)arg1 ;
@end
