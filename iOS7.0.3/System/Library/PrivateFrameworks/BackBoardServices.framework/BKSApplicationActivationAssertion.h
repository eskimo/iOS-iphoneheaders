/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:19 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class BKSWorkspace, NSString;

@interface BKSApplicationActivationAssertion : NSObject {

	BKSWorkspace* _workspace;
	NSString* _uniqueID;
	NSString* _name;
	BOOL _released;

}

@property (nonatomic,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
-(void)dealloc;
-(id)init;
-(id)name;
-(void)releaseAssertion;
-(id)_initWithWorkspace:(id)arg1 application:(id)arg2 name:(id)arg3 ;
@end
