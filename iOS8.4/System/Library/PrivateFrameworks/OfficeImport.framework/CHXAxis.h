/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:14 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface CHXAxis : NSObject
+(Class)chxAxisClassWithXmlAxisElement:(xmlNode*)arg1 state:(id)arg2 ;
+(void)readScalingFromXmlScalingElement:(xmlNode*)arg1 axis:(id)arg2 state:(id)arg3 ;
+(int)chdAxisPositionFromXmlAxisElement:(xmlNode*)arg1 state:(id)arg2 ;
+(int)chdTickMarkFromXmlTickMarkElement:(xmlNode*)arg1 ;
+(int)chdTickLabelPositionFromXmlTickLabelPositionElement:(xmlNode*)arg1 ;
+(int)chdCrossesFromXmlAxisElement:(xmlNode*)arg1 state:(id)arg2 ;
+(Class)chxAxisClassWithChdAxis:(id)arg1 ;
+(id)stringWithAxisPosition:(int)arg1 ;
+(id)stringWithTickMarkType:(int)arg1 ;
+(id)stringWithTickLabelPosition:(int)arg1 ;
+(id)stringWithCrosses:(int)arg1 ;
+(id)chdAxisFromXmlAxisElement:(xmlNode*)arg1 state:(id)arg2 ;
@end
