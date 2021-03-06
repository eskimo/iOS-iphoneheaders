/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:09 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <UIKit/UIActivityItemsSource.h>

@class BrowserPrintPageRenderer, UIPrintInfo, NSData, NSURL;

@interface ActionPanelActivityItemsSource : NSObject <UIActivityItemsSource> {

	BrowserPrintPageRenderer* _printRenderer;
	UIPrintInfo* _printInfo;
	NSData* _imageOnlyDocumentData;
	NSURL* _urlToShare;

}
-(id)_activityItemsForActivityType:(id)arg1 ;
-(id)_customActivities;
-(void)dealloc;
-(id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2 ;
-(id)activityViewController:(id)arg1 thumbnailImageForActivityType:(id)arg2 suggestedSize:(CGSize)arg3 ;
-(id)activityViewControllerPlaceholderItems:(id)arg1 ;
-(id)activityViewController:(id)arg1 itemsForActivityType:(id)arg2 ;
@end

