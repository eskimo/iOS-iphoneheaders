/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:13 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/IKAppNavigationController.h>
#import <StoreKitUI/SKUIDOMFeature.h>

@class IKJSNavigationDocument, SKUINavigationDocumentController, NSMutableArray, IKAppContext, NSString;

@interface SKUIJSDOMFeatureNavigationDocument : NSObject <IKAppNavigationController, SKUIDOMFeature> {

	IKJSNavigationDocument* _jsNavigationDocument;
	SKUINavigationDocumentController* _navigationDocumentController;
	NSMutableArray* _stackItems;
	IKAppContext* _appContext;
	NSString* _featureName;

}

@property (nonatomic,retain) SKUINavigationDocumentController * navigationDocumentController;              //@synthesize navigationDocumentController=_navigationDocumentController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain,readonly) NSString * featureName;                                              //@synthesize featureName=_featureName - In the implementation block
@property (__weak) IKAppContext * appContext;                                                              //@synthesize appContext=_appContext - In the implementation block
+(id)possibleFeatureNames;
-(void)clear;
-(IKAppContext *)appContext;
-(id)documents;
-(void)setNavigationDocumentController:(SKUINavigationDocumentController *)arg1 ;
-(void)pushDocument:(id)arg1 options:(id)arg2 ;
-(void)insertDocument:(id)arg1 beforeDocument:(id)arg2 options:(id)arg3 ;
-(void)replaceDocument:(id)arg1 withDocument:(id)arg2 options:(id)arg3 ;
-(void)popDocument;
-(void)popToDocument:(id)arg1 ;
-(void)popToRootDocument;
-(void)removeDocument:(id)arg1 ;
-(SKUINavigationDocumentController *)navigationDocumentController;
-(id)initWithFeatureName:(id)arg1 ;
-(id)featureJSObject;
-(void)setAppContext:(IKAppContext *)arg1 ;
-(NSString *)featureName;
@end

