/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:47 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UIDatePickerMode.h>

@class NSString, NSArray;

@interface _UIDatePickerMode_Custom : _UIDatePickerMode {

	NSString* _originalFormat;
	NSArray* _components;
	NSArray* _sortedComponents;
	int _displayedUnits;
	int _desiredUnits;

}
-(void)dealloc;
-(unsigned)numberOfComponents;
-(int)numberOfRowsInComponent:(int)arg1 ;
-(void)noteCalendarChanged;
-(int)displayedCalendarUnits;
-(int)componentForCalendarUnit:(unsigned)arg1 ;
-(unsigned)calendarUnitForComponent:(int)arg1 ;
-(void)resetComponentWidths;
-(id)initWithFormatString:(id)arg1 datePickerView:(id)arg2 ;
-(id)dateFormatForCalendarUnit:(unsigned)arg1 ;
-(float)widthForCalendarUnit:(unsigned)arg1 font:(id)arg2 maxWidth:(float)arg3 ;
-(unsigned)extractableCalendarUnits;
-(unsigned)nextUnitSmallerThanUnit:(unsigned)arg1 ;
-(unsigned)nextUnitLargerThanUnit:(unsigned)arg1 ;
-(int)valueForRow:(int)arg1 inCalendarUnit:(unsigned)arg2 ;
-(id)dateForRow:(int)arg1 inCalendarUnit:(unsigned)arg2 ;
-(int)titleAlignmentForCalendarUnit:(unsigned)arg1 ;
-(id)components;
-(id)_componentForCalendarUnit:(unsigned)arg1 ;
@end

