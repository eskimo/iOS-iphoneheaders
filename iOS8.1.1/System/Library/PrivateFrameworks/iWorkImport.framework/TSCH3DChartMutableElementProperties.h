/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:24 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DChartElementProperties.h>

@class TSCH3DArray2D, TSCH3DLabelResources, TSCH3DTransform;

@interface TSCH3DChartMutableElementProperties : TSCH3DChartElementProperties {

	TSCH3DArray2D* mLightingModels;
	TSCH3DLabelResources* mLabels;
	TSCH3DTransform* mChartTransform;
	TSCH3DTransform* mElementsTransform;

}

@property (nonatomic,retain) TSCH3DArray2D * lightingModels; 
@property (nonatomic,retain) TSCH3DLabelResources * labels; 
@property (nonatomic,retain) TSCH3DTransform * chartTransform; 
@property (nonatomic,retain) TSCH3DTransform * elementsTransform; 
-(void)setChartTransform:(TSCH3DTransform *)arg1 ;
-(TSCH3DTransform *)chartTransform;
-(TSCH3DTransform *)elementsTransform;
-(id)renderingLightingModelForSeries:(id)arg1 ;
-(TSCH3DArray2D *)lightingModels;
-(void)setLightingModels:(TSCH3DArray2D *)arg1 ;
-(void)setElementsTransform:(TSCH3DTransform *)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLabels:(TSCH3DLabelResources *)arg1 ;
-(TSCH3DLabelResources *)labels;
@end
