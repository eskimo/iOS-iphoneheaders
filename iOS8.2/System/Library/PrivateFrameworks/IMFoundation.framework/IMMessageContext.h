/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:19 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_voucher;
@class NSObject, IMLocalObject;

@interface IMMessageContext : NSObject {

	NSObject*<OS_xpc_object> _xpcMessage;
	IMLocalObject* _localObject;
	id _context;
	char _boost;
	NSObject*<OS_voucher> _voucher;

}

@property (retain) IMLocalObject * localObject;                      //@synthesize localObject=_localObject - In the implementation block
@property (retain) id context;                                       //@synthesize context=_context - In the implementation block
@property (assign) char shouldBoost;                                 //@synthesize boost=_boost - In the implementation block
@property (assign) NSObject*<OS_xpc_object> xpcMessage;              //@synthesize xpcMessage=_xpcMessage - In the implementation block
-(void)dealloc;
-(id)init;
-(id)context;
-(void)setContext:(id)arg1 ;
-(void)setXpcMessage:(NSObject*<OS_xpc_object>)arg1 ;
-(void)setLocalObject:(IMLocalObject *)arg1 ;
-(char)shouldBoost;
-(NSObject*<OS_xpc_object>)xpcMessage;
-(IMLocalObject *)localObject;
-(void)setShouldBoost:(char)arg1 ;
@end

