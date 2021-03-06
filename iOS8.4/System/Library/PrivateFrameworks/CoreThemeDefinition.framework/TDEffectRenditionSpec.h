/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:52 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreThemeDefinition/TDRenditionSpec.h>

@class NSNumber, NSSet;

@interface TDEffectRenditionSpec : TDRenditionSpec

@property (nonatomic,retain) NSNumber * effectScale; 
@property (nonatomic,retain) NSSet * components; 
-(id)createCSIRepresentationWithCompression:(BOOL)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3 ;
-(void)setComponentsFromEffectPreset:(id)arg1 withDocument:(id)arg2 ;
-(id)effectPreset;
@end

