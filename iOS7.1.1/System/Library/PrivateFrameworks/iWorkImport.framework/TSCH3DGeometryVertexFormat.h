/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:30 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSMutableArray, NSArray;

@interface TSCH3DGeometryVertexFormat : NSObject {

	NSMutableArray* mElements;
	unsigned long long mStride;
	unsigned long long mTotalComponents;
	long long mVertexCount;
	bool mCompiled;

}

@property (nonatomic,readonly) bool compiled; 
@property (nonatomic,readonly) unsigned long long stride; 
@property (nonatomic,readonly) unsigned long long totalComponents; 
@property (nonatomic,readonly) NSArray * elements; 
-(unsigned long long)totalComponents;
-(id)elementForName:(id)arg1 bufferInfo:(const DataBufferInfo*)arg2 ;
-(void)compile;
-(bool)compiled;
-(void)dealloc;
-(id)init;
-(bool)isEqual:(id)arg1 ;
-(id)description;
-(id)elements;
-(void)enumerateElementsUsingBlock:(/*^block*/ id)arg1 ;
-(unsigned long long)stride;
@end

