/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:11 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class IKAppDocument, SKUINavigationDocumentController, NSDictionary, UIViewController, NSString;

@interface SKUIDocumentStackItem : NSObject {

	IKAppDocument* _document;
	SKUINavigationDocumentController* _navigationDocumentController;
	NSDictionary* _presentationOptions;
	char _usesNavigationControllerForModalPresentation;
	UIViewController* _viewController;

}

@property (nonatomic,readonly) IKAppDocument * document;                                                   //@synthesize document=_document - In the implementation block
@property (nonatomic,readonly) NSDictionary * presentationOptions;                                         //@synthesize presentationOptions=_presentationOptions - In the implementation block
@property (assign,nonatomic) char usesNavigationControllerForModalPresentation;                            //@synthesize usesNavigationControllerForModalPresentation=_usesNavigationControllerForModalPresentation - In the implementation block
@property (nonatomic,retain) SKUINavigationDocumentController * navigationDocumentController;              //@synthesize navigationDocumentController=_navigationDocumentController - In the implementation block
@property (nonatomic,retain) UIViewController * viewController;                                            //@synthesize viewController=_viewController - In the implementation block
@property (getter=isAnimated,nonatomic,readonly) char animated; 
@property (nonatomic,readonly) NSString * presentationType; 
@property (nonatomic,readonly) NSString * sheetType; 
@property (nonatomic,readonly) NSString * overlayType; 
@property (nonatomic,readonly) NSString * sourceElementIdentifier; 
-(char)isAnimated;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(IKAppDocument *)document;
-(void)setNavigationDocumentController:(SKUINavigationDocumentController *)arg1 ;
-(NSDictionary *)presentationOptions;
-(id)initWithDocument:(id)arg1 presentationOptions:(id)arg2 ;
-(NSString *)presentationType;
-(NSString *)sheetType;
-(NSString *)overlayType;
-(NSString *)sourceElementIdentifier;
-(SKUINavigationDocumentController *)navigationDocumentController;
-(char)usesNavigationControllerForModalPresentation;
-(void)setUsesNavigationControllerForModalPresentation:(char)arg1 ;
@end

