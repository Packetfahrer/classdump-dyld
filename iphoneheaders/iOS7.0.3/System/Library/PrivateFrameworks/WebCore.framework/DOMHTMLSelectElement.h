/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:07 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <WebCore/DOMHTMLElement.h>

@class DOMHTMLFormElement, NSString, DOMHTMLOptionsCollection;

@interface DOMHTMLSelectElement : DOMHTMLElement

@property (assign) BOOL autofocus; 
@property (assign) BOOL disabled; 
@property (readonly) DOMHTMLFormElement * form; 
@property (assign) BOOL multiple; 
@property (copy) NSString * name; 
@property (assign) int size; 
@property (readonly) NSString * type; 
@property (readonly) DOMHTMLOptionsCollection * options; 
@property (readonly) int length; 
@property (assign) int selectedIndex; 
@property (copy) NSString * value; 
@property (readonly) BOOL willValidate; 
-(void)_startAssistingDocumentView:(id)arg1 ;
-(void)_stopAssistingDocumentView:(id)arg1 ;
-(BOOL)_requiresAccessoryView;
-(BOOL)_requiresInputView;
-(BOOL)_supportsAutoFill;
-(BOOL)nodeCanBecomeFirstResponder;
-(id)createPeripheral;
-(int)size;
-(int)length;
-(id)type;
-(void)setValue:(id)arg1 ;
-(void)setSize:(int)arg1 ;
-(void)setName:(id)arg1 ;
-(id)value;
-(id)name;
-(int)selectedIndex;
-(void)setSelectedIndex:(int)arg1 ;
-(id)item:(unsigned)arg1 ;
-(id)form;
-(BOOL)disabled;
-(void)setDisabled:(BOOL)arg1 ;
-(void)_activateItemAtIndex:(int)arg1 ;
-(void)_activateItemAtIndex:(int)arg1 allowMultipleSelection:(BOOL)arg2 ;
-(id)options;
-(BOOL)multiple;
-(unsigned)completeLength;
-(id)listItemAtIndex:(int)arg1 ;
-(int)structuralComplexityContribution;
-(id)namedItem:(id)arg1 ;
-(void)remove:(int)arg1 ;
-(BOOL)autofocus;
-(void)setAutofocus:(BOOL)arg1 ;
-(BOOL)willValidate;
-(id)validity;
-(id)validationMessage;
-(id)labels;
-(BOOL)checkValidity;
-(void)setCustomValidity:(id)arg1 ;
-(void)setMultiple:(BOOL)arg1 ;
-(BOOL)required;
-(void)setRequired:(BOOL)arg1 ;
-(id)selectedOptions;
-(void)add:(id)arg1 before:(id)arg2 ;
-(void)add:(id)arg1 :(id)arg2 ;
@end
