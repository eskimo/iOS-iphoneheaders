/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:28 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DChartAddBoundsSceneObjectMode.h>

@interface TSCH3DChartAddRotationBoundsSceneObjectMode : TSCH3DChartAddBoundsSceneObjectMode {

	int mRotationType;

}

@property (assign,nonatomic) int rotationType; 
-(void)getBounds:(id)arg1 ;
-(double)p_radiusFromBounds:(const box<glm::detail::tvec3<float> >*)arg1 pivot:(const tvec3<float>*)arg2 ;
-(void)p_submitGeometryForChartBounds:(const box<glm::detail::tvec3<float> >*)arg1 pivot:(const tvec3<float>*)arg2 thicknessIndex:(unsigned)arg3 pipeline:(id)arg4 ;
-(int)rotationType;
-(void)setRotationType:(int)arg1 ;
@end

