/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:36 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UITableView.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@protocol SKUIRedeemResultsViewDelegate;
@class NSArray;

@interface SKUIRedeemResultsView : UITableView <UITableViewDelegate, UITableViewDataSource> {

	NSArray* _sections;
	UIEdgeInsets _contentInsetAdjustments;
	<SKUIRedeemResultsViewDelegate>* _resultsDelegate;

}

@property (nonatomic,retain) NSArray * sections;                                                    //@synthesize sections=_sections - In the implementation block
@property (assign,nonatomic,__weak) <SKUIRedeemResultsViewDelegate> * resultsDelegate;              //@synthesize resultsDelegate=_resultsDelegate - In the implementation block
-(id)init;
-(void)layoutSubviews;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)setSections:(id)arg1 ;
-(id)sections;
-(void)setResultsDelegate:(id)arg1 ;
-(id)resultsDelegate;
-(void).cxx_destruct;
@end
