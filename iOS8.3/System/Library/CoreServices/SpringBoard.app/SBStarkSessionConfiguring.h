/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:20:26 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class AVExternalDevice, UIScreen, UITraitCollection, NSSet;


@protocol SBStarkSessionConfiguring <NSObject>
@property (nonatomic,retain,readonly) AVExternalDevice * device; 
@property (nonatomic,readonly) unsigned interactionAffordances; 
@property (nonatomic,readonly) int layoutJustification; 
@property (nonatomic,retain,readonly) UIScreen * screen; 
@property (nonatomic,copy,readonly) UITraitCollection * traitCollection; 
@property (getter=isGeoSupported,nonatomic,readonly) char geoSupported; 
@property (nonatomic,copy,readonly) NSSet * sessionProtocols; 
@required
-(NSSet *)sessionProtocols;
-(char)isGeoSupported;
-(unsigned)interactionAffordances;
-(int)layoutJustification;
-(UIScreen *)screen;
-(UITraitCollection *)traitCollection;
-(AVExternalDevice *)device;

@end

