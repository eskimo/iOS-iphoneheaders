/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:45 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TSSPropertyValueValidator
@required
+(bool)validateObjectValue:(id*)arg1 withClass:(Class)arg2 forProperty:(int)arg3;
+(bool)validateFloatValue:(float*)arg1 forProperty:(int)arg2;
+(id)propertiesAllowingNSNull;
+(bool)validateIntValue:(int*)arg1 forProperty:(int)arg2;
+(bool)validateIntValue:(int*)arg1 forProperty:(int)arg2 min:(int)arg3 max:(int)arg4;
+(bool)validateIntValueAsBool:(int*)arg1 forProperty:(int)arg2;
+(bool)validateDoubleValue:(double*)arg1 forProperty:(int)arg2;
-(bool)validateObjectValue:(id*)arg1 withClass:(Class)arg2 forProperty:(int)arg3;
-(bool)validateFloatValue:(float*)arg1 forProperty:(int)arg2;
-(bool)validateIntValue:(int*)arg1 forProperty:(int)arg2;
-(bool)validateIntValue:(int*)arg1 forProperty:(int)arg2 min:(int)arg3 max:(int)arg4;
-(bool)validateIntValueAsBool:(int*)arg1 forProperty:(int)arg2;
-(bool)validateDoubleValue:(double*)arg1 forProperty:(int)arg2;
@end
