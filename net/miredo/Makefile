# Created by: Andreas Kohn <andreas@syndrom23.de>
# $FreeBSD$

PORTNAME=		miredo
PORTVERSION=		1.2.6
PORTREVISION=		4
CATEGORIES=		net ipv6
MASTER_SITES=		http://www.remlab.net/files/miredo/archive/

MAINTAINER=		sumikawa@FreeBSD.org
COMMENT=		Opensource Teredo (IPv6 tunneling) implementation

LIB_DEPENDS=		libJudy.so:${PORTSDIR}/devel/judy

USES=			libtool localbase tar:xz
GNU_CONFIGURE=		yes
CONFIGURE_ARGS=		--localstatedir=/var --enable-examplesdir=$(EXAMPLESDIR)
USE_LDCONFIG=		yes

OPTIONS_DEFINE=	POLICYTABLE NLS
OPTIONS_SUB=	yes

NLS_USES=		gettext iconv
NLS_CONFIGURE_ENABLE=	nls
POLICYTABLE_DESC=	Install policy table to support teredo

USE_RC_SUBR=		miredo-server miredo

post-install-POLICYTABLE-on:
	$(INSTALL_DATA) $(FILESDIR)/ip6addrctl.conf /etc

.include <bsd.port.mk>
