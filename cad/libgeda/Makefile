# Created by: bruno schwander <bruno@tinkerbox.org>
# $FreeBSD$

PORTNAME=	libgeda
PORTVERSION=	1.4.3
PORTREVISION=	8
PORTEPOCH=	1
CATEGORIES=	cad
MASTER_SITES=	ftp://ftp.geda.seul.org/pub/geda/release/v1.4/${PORTVERSION}/ \
		http://geda.seul.org/release/v1.4/${PORTVERSION}/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	The gEDA's tools base utility library

BROKEN=		Unfetchable

LIB_DEPENDS=	libguile.so:${PORTSDIR}/lang/guile

GNU_CONFIGURE=	yes
INSTALLS_ICONS=	yes
USES=		gmake libtool pathfix pkgconfig shared-mime-info
USE_GNOME=	gtk20
USE_LDCONFIG=	yes
CONFIGURE_ARGS=	--disable-update-mime-database \
		--disable-update-desktop-database
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

OPTIONS_DEFINE=	NLS
OPTIONS_SUB=	yes

NLS_USES=		gettext
NLS_CONFIGURE_ENABLE=	nls

post-patch:
	@${REINPLACE_CMD} -E \
		-e "s,^(DATADIR[[:space:]]*=[[:space:]]*)gEDA,\1geda," \
		${WRKSRC}/configure

.include <bsd.port.mk>
