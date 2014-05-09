/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import "MFMailCompositionContext.h"

@class MessageViewingContext, MailMessage;

typedef enum MailCompositionContextType {
	MailCompositionContextType_NewMessage,
	MailCompositionContextType_Draft,
	MailCompositionContextType_Reply,
	MailCompositionContextType_ReplyAll,
	MailCompositionContextType_Forward,
	
	MailCompositionContextType_RecoveredAutosave = 6
} MailCompositionContextType;

@interface MailCompositionContext : MFMailCompositionContext {
@private
	int _composeType;
	MailMessage* _originalMessage;
	id _originalContent;
	MessageViewingContext* _loadingContext;
	struct {
		unsigned loadRest : 1;
		unsigned includeAttachments : 1;
	} _mailComposeFlags;
}
@property(readonly, assign, nonatomic) MailCompositionContextType composeType;
@property(readonly, retain, nonatomic) MailMessage* originalMessage;
@property(retain, nonatomic) id originalContent;
@property(retain, nonatomic) MessageViewingContext* loadingContext;
@property(assign, nonatomic) BOOL includeAttachments;
@property(assign, nonatomic) BOOL loadRest;
-(id)initWithComposeType:(MailCompositionContextType)composeType;
-(id)initWithComposeType:(MailCompositionContextType)composeType originalMessage:(MailMessage*)message;
-(id)initReplyToMessage:(MailMessage*)message;
-(id)initReplyAllToMessage:(MailMessage*)message;
-(id)initForwardOfMessage:(MailMessage*)message;
-(id)initDraftRestoreOfMessage:(MailMessage*)message;
// inherited: -(void)dealloc;
@end

