/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:00:07 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol TransferMailboxPickerDelegate <NSObject>
@optional
-(void)transferMailboxPickerController:(id)arg1 animateMessageToPoint:(CGPoint)arg2 inView:(id)arg3 didFinishDelegate:(id)arg4 selector:(SEL)arg5 context:(id)arg6;
-(void)transferMailboxPickerController:(id)arg1 animateMessageToThumbnailFrame:(CGRect)arg2 inView:(id)arg3 completion:(/*^block*/ id)arg4;
-(id)transferMailboxPickerController:(id)arg1 viewForMessage:(id)arg2;

@required
-(void)transferMailboxPickerController:(id)arg1 didSelectMailbox:(id)arg2 withMessages:(id)arg3;
-(void)transferMailboxPickerControllerDidFinish:(id)arg1 animated:(BOOL)arg2;
@end
