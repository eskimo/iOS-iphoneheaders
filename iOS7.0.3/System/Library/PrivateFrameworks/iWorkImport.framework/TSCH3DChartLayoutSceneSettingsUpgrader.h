/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:32 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DAbstractLimitingSeriesUpgrader.h>

@class TSCH3DChartLayout, NSValue;

@interface TSCH3DChartLayoutSceneSettingsUpgrader : TSCH3DAbstractLimitingSeriesUpgrader {

	TSCH3DChartLayout* mChartLayout;
	BOOL mIsMutatedForSceneSettings;
	NSValue* mInfoGeometryOffset;
	BOOL hasConstantDepth;

}

@property (assign,nonatomic) BOOL hasConstantDepth; 
-(id)sceneResetWithLayoutSettings:(SCD_Struct_TS407)arg1 ;
-(CGRect)oldResizingFrame;
-(id)containingViewportByResizingScene:(id)arg1 toResizingFrame:(CGRect)arg2 ;
-(SCD_Struct_TS407)oldLayoutSettings;
-(BOOL)hasConstantDepth;
-(void)mutateInfoWithContainingViewport:(id)arg1 scene:(id)arg2 ;
-(void)updateInfoGeometryIfNecessary;
-(void)setHasConstantDepth:(BOOL)arg1 ;
-(void)dealloc;
-(void)upgrade;
@end
