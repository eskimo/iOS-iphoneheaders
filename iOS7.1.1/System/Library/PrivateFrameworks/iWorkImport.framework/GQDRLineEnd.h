/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:17 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQDNameMappable.h>

@class GQDBezierPath;

@interface GQDRLineEnd : NSObject <GQDNameMappable> {

	GQDBezierPath* mPath;
	CGPoint mEndPoint;
	bool mIsFilled;
	double mScale;

}
+(const StateSpec*)stateForReading;
-(int)readAttributesFromReader:(xmlTextReaderRef)arg1 ;
-(char*)pathStr;
-(CGPoint)endPoint;
-(void)dealloc;
-(double)scale;
-(CGPathRef)path;
-(id).cxx_construct;
-(bool)isFilled;
@end

