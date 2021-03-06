/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:18 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSFormatter.h>

@class NSNumberFormatter;

@interface NSMassFormatter : NSFormatter {

	void* _formatter;
	BOOL _isForPersonMassUse;
	void** _reserved[2];

}

@property (copy) NSNumberFormatter * numberFormatter; 
@property (assign) long long unitStyle; 
@property (getter=isForPersonMassUse) BOOL forPersonMassUse;              //@synthesize isForPersonMassUse=_isForPersonMassUse - In the implementation block
-(void)setNumberFormatter:(NSNumberFormatter *)arg1 ;
-(NSNumberFormatter *)numberFormatter;
-(void)setUnitStyle:(long long)arg1 ;
-(long long)unitStyle;
-(id)unitStringFromValue:(double)arg1 unit:(long long)arg2 ;
-(id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2 ;
-(id)stringFromValue:(double)arg1 unit:(long long)arg2 ;
-(id)stringFromKilograms:(double)arg1 ;
-(long long)targetUnitFromKilograms:(double)arg1 ;
-(id)unitStringFromKilograms:(double)arg1 usedUnit:(long long*)arg2 ;
-(BOOL)isForPersonMassUse;
-(void)setForPersonMassUse:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
-(id)stringForObjectValue:(id)arg1 ;
-(BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3 ;
@end

