/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:15 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Stocks.app/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Stocks/Stocks-Structs.h>
#import <Stocks/StocksController.h>

@protocol StocksTopLevelViewController;
@class UIViewController, StocksBackSideNavigationController, StocksBackSideViewController;

@interface StocksMainController : StocksController {

	char _showingBackside;
	char _updateStocksOnFlipToFront;
	char _updateChartOnFlipToFront;
	UIViewController*<StocksTopLevelViewController> _frontSideViewController;
	StocksBackSideNavigationController* _backSideNavigationController;
	StocksBackSideViewController* _backSideViewController;

}

@property (assign,nonatomic) char showingBackside; 
+(id)sharedStocksController;
+(char)_shouldForwardViewWillTransitionToSize;
-(void)prepareForApplicationScreenshot;
-(id)frontSideViewController;
-(void)setShowingBackside:(char)arg1 ;
-(id)chartView;
-(id)newsView;
-(void)updateChartData;
-(void)updateStockDataForAllStocks:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)stocksListChanged;
-(void)setSelectedStock:(id)arg1 writeToDefaults:(char)arg2 ;
-(char)shouldUpdateSelectedStockComprehensive;
-(void)_handleStatusBarHeightChange:(id)arg1 ;
-(void)switchToBackIfNeeded;
-(void)switchToBack;
-(void)setShowingBackside:(char)arg1 animated:(char)arg2 ;
-(void)backSideDone;
-(id)backsideNavigationController;
-(void)_dismissEditViewAnimated:(char)arg1 ;
-(id)backsideView;
-(char)showingBackside;
-(void)dealloc;
-(id)init;
-(char)shouldAutorotate;
-(unsigned)supportedInterfaceOrientations;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)loadView;
-(void)run;
-(void)resume;
-(char)isLoading;
-(id)listView;
-(void)willResignActive;
-(void)newsUpdater:(id)arg1 didReceiveNewsItems:(id)arg2 ;
@end

