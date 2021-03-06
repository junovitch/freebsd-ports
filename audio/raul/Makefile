# Created by: Edward Tomasz Napierala <trasz@FreeBSD.org>
# $FreeBSD$

PORTNAME=	raul
PORTVERSION=	0.8.0
PORTREVISION=	3
CATEGORIES=	audio
MASTER_SITES=	http://download.drobilla.net/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	C++ utility library primarily aimed at audio/musical applications

LICENSE=	GPLv2 GPLv3
LICENSE_COMB=	dual

LIB_DEPENDS=	libboost_date_time.so:${PORTSDIR}/devel/boost-libs

USES=		pkgconfig tar:bzip2 waf
USE_GNOME=	glib20
USE_LDCONFIG=	yes

CFLAGS+=	-I${LOCALBASE}/include

.if defined(BATCH) || defined(PACKAGE_BUILDING)
MAKE_ARGS=	--verbose
.endif

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/libraul.so

post-patch:
	@${REINPLACE_CMD} -e \
		"s|$$[{]LIBDIRNAME[}]/pkgconfig|libdata/pkgconfig| ; \
		 s|-fshow-column'|-fshow-column ${CXXFLAGS}'|" \
			${WRKSRC}/autowaf/autowaf.py

.include <bsd.port.mk>
