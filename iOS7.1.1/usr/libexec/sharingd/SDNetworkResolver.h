/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:34:29 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <sharingd/sharingd-Structs.h>
#import <sharingd/SDBonjourResolverDelegate.h>

@protocol SDNetworkResolverDelegate;
@class SDBonjourResolver, NSNumber, NSString;

@interface SDNetworkResolver : NSObject <SDBonjourResolverDelegate> {

	void* _session;
	SFNodeRef _node;
	int _mountedCount;
	int _ejectedCount;
	SDBonjourResolver* _resolver;
	NSNumber* _flags;
	NSString* _protocol;
	<SDNetworkResolverDelegate>* _delegate;

}

@property (copy) NSNumber * flags;                                      //@synthesize flags=_flags - In the implementation block
@property (copy) NSString * protocol;                                   //@synthesize protocol=_protocol - In the implementation block
@property (__weak) <SDNetworkResolverDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)bonjourResolverDidChange:(id)arg1 ;
-(void)notifyClientAboutResolve:(int)arg1 ;
-(void)mount;
-(void)mountDiskImageAsync;
-(void)setProtocol:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(int)start;
-(id)initWithNode:(SFNodeRef)arg1 ;
-(void).cxx_destruct;
-(void)stop;
-(id)protocol;
-(id)flags;
-(void)setFlags:(id)arg1 ;
@end
