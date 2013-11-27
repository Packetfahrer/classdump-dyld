/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:30 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UITableViewController.h>
#import <Maps/EnvironmentsControllerDelegate.h>

@class EnvironmentsController;

@interface EnvironmentsViewController : UITableViewController <EnvironmentsControllerDelegate> {

	EnvironmentsController* _environmentsController;

}
-(void)environmentsController:(id)arg1 didUpdateEnvironmentsSection:(int)arg2 ;
-(id)_environmentForIndexPath:(id)arg1 ;
-(void)errorButtonTapped:(id)arg1 withEvent:(id)arg2 ;
-(void)_done:(id)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3 ;
-(id)initWithStyle:(int)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
@end
