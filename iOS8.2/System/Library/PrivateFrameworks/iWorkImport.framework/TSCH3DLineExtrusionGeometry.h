/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:07 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DExtrusionGeometry.h>

@interface TSCH3DLineExtrusionGeometry : TSCH3DExtrusionGeometry {

	tvec2<float> mYlimits;
	tvec2<float> mXlimits;

}

@property (assign,nonatomic) tvec2<float> ylimits; 
@property (assign,nonatomic) tvec2<float> xlimits; 
+(id)lineFromValues:(const vector<float, std::__1::allocator<float> >*)arg1 yLimits:(tvec2<float>)arg2 ;
-(tmat4x4<float>)matrixAtXPosition:(float)arg1 returningXRangeInfo:(LineExtrusionGeometryXRangeInfo*)arg2 ;
-(tvec2<float>)xlimits;
-(void)generateArrays;
-(id)selectionKnobPositions;
-(void)setSpine:(const vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float> > >*)arg1 ;
-(void)setYlimits:(tvec2<float>)arg1 ;
-(void)setXlimits:(tvec2<float>)arg1 ;
-(tmat3x3<float>)p_rotationMatrixForCrossSectionIndex:(unsigned long)arg1 ;
-(tvec2<float>)ylimits;
-(id)init;
@end

