/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:37 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DRetargetRenderProcessor.h>

@class TSCH3DResource, TSCH3Dvec3DataBuffer;

@interface TSCH3DChartSilhouetteEdgeCollectProcessor : TSCH3DRetargetRenderProcessor {

	EdgeDetectionParameters mEdgeDetectionParameters;
	TSCH3DResource* mVertices;
	TSCH3Dvec3DataBuffer* mEdges;

}

@property (nonatomic,retain) TSCH3DResource * vertices; 
@property (nonatomic,readonly) TSCH3Dvec3DataBuffer * edges; 
-(long long)attribute:(id)arg1 resource:(id)arg2 specs:(const AttributeSpecs*)arg3 ;
-(void)submit:(const PrimitiveInfo*)arg1 ;
-(id)initWithEdgeDetectionParameters:(const EdgeDetectionParameters*)arg1 ;
-(void)dealloc;
-(id).cxx_construct;
-(id)edges;
-(void)setVertices:(id)arg1 ;
-(id)matrix;
-(id)vertices;
@end

