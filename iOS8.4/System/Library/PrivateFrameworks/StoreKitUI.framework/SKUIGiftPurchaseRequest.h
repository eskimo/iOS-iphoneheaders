/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:25:57 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SKUIURLConnectionRequest;

@interface SKUIGiftPurchaseRequest : NSObject {

	SKUIURLConnectionRequest* _request;

}
-(id)initWithGift:(id)arg1 configuration:(id)arg2 ;
-(void)purchaseWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)initWithDonation:(id)arg1 configuration:(id)arg2 ;
-(id)_requestWithURL:(id)arg1 bodyDictionary:(id)arg2 ;
@end
