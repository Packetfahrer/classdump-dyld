/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:11 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UITableViewController.h>

@protocol EKICSPreviewListDelegate;
@class EKICSPreviewModel, NSMutableArray, ;

@interface EKICSPreviewListController : UITableViewController {

	EKICSPreviewModel* _model;
	NSMutableArray* _sections;
	BOOL _allowsImport;
	BOOL _allowsSubitems;
	BOOL _showWeekNumbers;
	<EKICSPreviewListDelegate>* _listDelegate;

}

@property (assign,nonatomic) BOOL allowsImport;                                             //@synthesize allowsImport=_allowsImport - In the implementation block
@property (assign,nonatomic) BOOL allowsSubitems;                                           //@synthesize allowsSubitems=_allowsSubitems - In the implementation block
@property (assign,nonatomic,__weak) <EKICSPreviewListDelegate> * listDelegate;              //@synthesize listDelegate=_listDelegate - In the implementation block
@property (assign,nonatomic) BOOL showWeekNumbers;                                          //@synthesize showWeekNumbers=_showWeekNumbers - In the implementation block
-(id)initWithModel:(id)arg1 ;
-(void)setAllowsSubitems:(BOOL)arg1 ;
-(BOOL)allowsSubitems;
-(void)_showWeekNumbersPreferenceChanged:(id)arg1 ;
-(void)setListDelegate:(id)arg1 ;
-(void)setAllowsImport:(BOOL)arg1 ;
-(BOOL)allowsImport;
-(void)buildSections;
-(void)updateImportButton;
-(void)importAllPressed:(id)arg1 ;
-(BOOL)showWeekNumbers;
-(void)setShowWeekNumbers:(BOOL)arg1 ;
-(id)listDelegate;
-(void)dealloc;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)viewDidLoad;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void).cxx_destruct;
@end
