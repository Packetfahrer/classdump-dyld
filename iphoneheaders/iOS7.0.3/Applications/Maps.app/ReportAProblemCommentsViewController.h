/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:25 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UITableViewController.h>
#import <UIKit/UITextViewDelegate.h>
#import <Maps/ReportAProblemReporter.h>

@class UITextView, ReportAProblemNavigationController;

@interface ReportAProblemCommentsViewController : UITableViewController <UITextViewDelegate, ReportAProblemReporter> {

	UITextView* _textView;
	BOOL _allowsImmediateSend;

}

@property (assign,nonatomic) BOOL allowsImmediateSend;                                                 //@synthesize allowsImmediateSend=_allowsImmediateSend - In the implementation block
@property (nonatomic,readonly) ReportAProblemNavigationController * navigationController; 
-(void)populateRPProblem:(id)arg1 request:(id)arg2 ;
-(void)updateEnabledState;
-(BOOL)canReportProblem;
-(void)next:(id)arg1 ;
-(BOOL)allowsImmediateSend;
-(void)setAllowsImmediateSend:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(unsigned)supportedInterfaceOrientations;
-(id)navigationController;
-(id)initWithStyle:(int)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)textViewDidChange:(id)arg1 ;
-(void)cancel:(id)arg1 ;
@end
