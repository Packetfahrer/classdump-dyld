/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:17 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CertInfo/CertInfo-Structs.h>
#import <UIKit/UITableViewController.h>

@protocol CertInfoCertificateDetailsControllerDelegate;
@class , NSArray, UIBarButtonItem;

@interface CertInfoCertificateDetailsController : UITableViewController {

	<CertInfoCertificateDetailsControllerDelegate>* _delegate;
	NSArray* _sectionDictionaries;
	UIBarButtonItem* _doneButton;
	unsigned _showsDoneButton : 1;

}

@property (assign,nonatomic) <CertInfoCertificateDetailsControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,@dynamic) BOOL showsDoneButton; 
-(id)initWithTrust:(SecTrustRef)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(id)delegate;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(id)initWithTrust:(SecTrustRef)arg1 certificateIndex:(long)arg2 ;
-(id)initWithCertificateProperties:(id)arg1 ;
-(id)_sectionsForProperties:(id)arg1 ;
-(id)_sectionsForProperties:(id)arg1 currentSectionDictionary:(id)arg2 ;
-(id)_propertiesForIndexPath:(id)arg1 ;
-(void)setShowsDoneButton:(BOOL)arg1 ;
-(BOOL)showsDoneButton;
-(void)_doneButtonPressed:(id)arg1 ;
@end
