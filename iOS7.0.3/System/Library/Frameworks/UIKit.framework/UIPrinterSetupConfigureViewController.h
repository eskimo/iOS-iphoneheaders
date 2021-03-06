/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:53 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITextFieldDelegate.h>

@class PKPrinter, NSString, UIButton, UIPrinterSetupConnectingView;

@interface UIPrinterSetupConfigureViewController : UITableViewController <UITableViewDataSource, UITextFieldDelegate> {

	BOOL _addToNetwork;
	BOOL _directPrinting;
	PKPrinter* _printer;
	NSString* _directPasscode;
	UIButton* _finishButton;
	UIPrinterSetupConnectingView* _connectingView;

}

@property (nonatomic,retain) PKPrinter * printer;                                        //@synthesize printer=_printer - In the implementation block
@property (assign,nonatomic) BOOL addToNetwork;                                          //@synthesize addToNetwork=_addToNetwork - In the implementation block
@property (assign,nonatomic) BOOL directPrinting;                                        //@synthesize directPrinting=_directPrinting - In the implementation block
@property (nonatomic,copy) NSString * directPasscode;                                    //@synthesize directPasscode=_directPasscode - In the implementation block
@property (nonatomic,retain) UIButton * finishButton;                                    //@synthesize finishButton=_finishButton - In the implementation block
@property (nonatomic,retain) UIPrinterSetupConnectingView * connectingView;              //@synthesize connectingView=_connectingView - In the implementation block
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(int)arg3 ;
-(void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(int)arg3 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(int)arg2 ;
-(unsigned)supportedInterfaceOrientations;
-(void)textDidChange:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
-(void)setPrinter:(id)arg1 ;
-(id)printer;
-(id)initWithPrinter:(id)arg1 ;
-(void)setConnectingView:(id)arg1 ;
-(id)connectingView;
-(void)setAddToNetwork:(BOOL)arg1 ;
-(void)setDirectPrinting:(BOOL)arg1 ;
-(void)setDirectPasscode:(id)arg1 ;
-(void)setFinishButton:(id)arg1 ;
-(void)finish;
-(void)finished:(BOOL)arg1 ;
-(void)toggleAddToNetwork:(id)arg1 ;
-(void)toggleDirectPrinting:(id)arg1 ;
-(BOOL)addToNetwork;
-(BOOL)directPrinting;
-(id)directPasscode;
-(id)finishButton;
@end

