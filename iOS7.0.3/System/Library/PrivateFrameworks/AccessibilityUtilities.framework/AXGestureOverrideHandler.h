/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:07 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface AXGestureOverrideHandler : NSObject {

	/*^block*/ id _handler;
	unsigned _type;
	NSString* _identifier;

}

@property (nonatomic,copy) id handler;                           //@synthesize handler=_handler - In the implementation block
@property (assign,nonatomic) unsigned type;                      //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
-(void)dealloc;
-(void)setType:(unsigned)arg1 ;
-(unsigned)type;
-(id)identifier;
-(void)setIdentifier:(id)arg1 ;
-(void)setHandler:(/*^block*/ id)arg1 ;
-(/*^block*/ id)handler;
@end

