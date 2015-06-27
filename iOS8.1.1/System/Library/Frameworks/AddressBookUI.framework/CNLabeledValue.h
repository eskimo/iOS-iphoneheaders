/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:46 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <AddressBookUI/NSCopying.h>

@class NSString;

@interface CNLabeledValue : NSObject <NSCopying> {

	int _multiValueIdentifier;
	NSString* _label;
	id _value;

}

@property (copy,readonly) NSString * identifier; 
@property (copy,readonly) NSString * label;                       //@synthesize label=_label - In the implementation block
@property (copy,readonly) id value;                               //@synthesize value=_value - In the implementation block
@property (readonly) int multiValueIdentifier; 
@property (copy,readonly) NSString * localizedLabel; 
+(id)labeledValueWithLabel:(id)arg1 value:(id)arg2 ;
+(id)allCustomLabels;
+(void)deleteCustomLabel:(id)arg1 ;
+(id)labeledValueWithMultiValueIdentifier:(int)arg1 label:(id)arg2 value:(id)arg3 ;
+(id)builtinLabelsForProperty:(id)arg1 ;
+(id)defaultLabels;
+(id)allLabels;
+(void*)addressBook;
-(void)setMultiValueIdentifier:(int)arg1 ;
-(int)multiValueIdentifier;
-(NSString *)localizedLabel;
-(id)labeledValueBySettingLabel:(id)arg1 value:(id)arg2 ;
-(BOOL)isEqualToLabelledValue:(id)arg1 ;
-(id)initWithMultiValueIdentifier:(int)arg1 label:(id)arg2 value:(id)arg3 ;
-(BOOL)isEqualToLabelledValue:(id)arg1 includeIdentifiers:(BOOL)arg2 ;
-(id)labeledValueBySettingValue:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)value;
-(NSString *)label;
-(id)initWithLabel:(id)arg1 value:(id)arg2 ;
@end
